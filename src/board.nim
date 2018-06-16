import random

const BOARD_WIDTH: uint = 10
const BOARD_HEIGHT: uint = 20

const MARGIN: uint = 2

const BLOCK_WIDTH = 32
const BLOCK_HEIGHT = 32

type 
    BlockColor = enum
        red, light_green, green, blue, orange, yellow, purple, gray

type
    TetronimoRotation = enum
        R0, R1, R2, R3
        
type 
    TetronimoPosition = tuple[x,y: uint]

type 
    TetronimoType = enum
        I, J, L, O, S, T, Z

type
    TetronimoTemplate = array[0..3, array[0..3, tuple[x,y: uint]]]

type
    Tetronimo = tuple[shape: TetronimoTemplate, position: tuple[x,y: uint], rotation: TetronimoRotation, color: BlockColor]

type
    Board = array[0..19, array[0..9, BlockColor]]

type
    Coord = tuple[x, y: uint]

type
    ShapePosition = tuple[x,y: uint]

const SHAPE_I: TetronimoTemplate = [
    [(1'u,0'u),(1'u,1'u),(1'u,2'u),(1'u,3'u)],
    [(0'u,1'u),(1'u,1'u),(2'u,1'u),(3'u,1'u)],
    [(2'u,0'u),(2'u,1'u),(2'u,2'u),(2'u,3'u)],
    [(0'u,2'u),(1'u,2'u),(2'u,2'u),(3'u,2'u)]
]

const SHAPE_J: TetronimoTemplate = [
    [(1'u,0'u),(1'u,1'u),(1'u,2'u),(0'u,2'u)],
    [(0'u,1'u),(1'u,1'u),(2'u,1'u),(2'u,2'u)],
    [(0'u,2'u),(1'u,0'u),(1'u,1'u),(1'u,2'u)],
    [(0'u,0'u),(0'u,1'u),(1'u,1'u),(2'u,1'u)]
]

const SHAPE_L: TetronimoTemplate = [
    [(0'u,0'u),(1'u,0'u),(1'u,1'u),(1'u,2'u)],
    [(0'u,1'u),(1'u,1'u),(2'u,1'u),(2'u,0'u)],
    [(1'u,0'u),(1'u,1'u),(1'u,2'u),(2'u,2'u)],
    [(0'u,1'u),(0'u,2'u),(1'u,1'u),(1'u,2'u)]
]

const SHAPE_O: TetronimoTemplate = [
    [(1'u,1'u),(1'u,2'u),(2'u,1'u),(2'u,2'u)],
    [(1'u,1'u),(1'u,2'u),(2'u,1'u),(2'u,2'u)],
    [(1'u,1'u),(1'u,2'u),(2'u,1'u),(2'u,2'u)],
    [(1'u,1'u),(1'u,2'u),(2'u,1'u),(2'u,2'u)]
]

const SHAPE_S: TetronimoTemplate = [
    [(0'u,0'u),(0'u,1'u),(1'u,1'u),(1'u,2'u)],
    [(0'u,1'u),(1'u,1'u),(1'u,0'u),(2'u,0'u)],
    [(1'u,0'u),(1'u,1'u),(2'u,1'u),(2'u,2'u)],
    [(0'u,2'u),(1'u,2'u),(1'u,1'u),(2'u,2'u)]      
]

const SHAPE_T: TetronimoTemplate = [
    [(0'u,1'u),(1'u,1'u),(2'u,1'u),(1'u,0'u)],
    [(1'u,0'u),(1'u,1'u),(1'u,2'u),(2'u,1'u)],
    [(0'u,1'u),(1'u,1'u),(2'u,1'u),(1'u,2'u)],
    [(0'u,1'u),(1'u,0'u),(1'u,1'u),(1'u,2'u)]
]

const SHAPE_Z: TetronimoTemplate = [
    [(0'u,1'u),(0'u,2'u),(1'u,0'u),(1'u,1'u)],
    [(0'u,0'u),(1'u,0'u),(1'u,1'u),(2'u,1'u)],
    [(2'u,0'u),(2'u,1'u),(1'u,1'u),(1'u,2'u)],
    [(0'u,1'u),(1'u,1'u),(1'u,2'u),(2'u,2'u)]
]

type
    Block = tuple[x,y: uint, color: BlockColor]

proc isBlockAt(board: Board; x, y: uint): bool =
  assert(x < BOARD_WIDTH)
  assert(y < BOARD_HEIGHT)
  result = not (board[y][x] == gray)

# This check in shape coordinates
proc isOwnBlock(tetronimo: Tetronimo, x,y: uint): bool =
    result = tetronimo.shape[tetronimo.rotation.int].contains((x,y))

# This checks in board coordinates
proc blockBelongsToTetronimo(tetronimo: Tetronimo, x,y: uint): bool =
    var belongsToTetronimo = false
    for b in tetronimo.shape[tetronimo.rotation.int]:
        let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
        if boardCoord.x == x and boardCoord.y == y:
            belongsToTetronimo = true
            break
    result = belongsToTetronimo

proc canDropTetronimo(board: Board, tetronimo: Tetronimo): bool =
    var canDrop = true
    for b in tetronimo.shape[tetronimo.rotation.int]:
        let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
        if boardCoord.y < BOARD_HEIGHT-1:
            if isBlockAt(board, boardCoord.x, boardCoord.y + 1):
                if not blockBelongsToTetronimo(tetronimo, boardCoord.x, boardCoord.y + 1):
                    canDrop = false
                    break
        else:
            canDrop = false
            break
    result = canDrop

proc shouldGenerateNextTetronimo(board: Board, tetronimo: Tetronimo): bool = 
    # If we can't drop further, it's time to generate a new block
    result = not canDropTetronimo(board, tetronimo)

proc applyGravity(board: var Board, tetronimo: var Tetronimo) =
    # First find full rows
    # Track the row indices that are full
    var fullRowIndices = newSeq[uint]()

    for rowIndex in 0..BOARD_HEIGHT-1:
        var isFull = true
        for colIndex in 0..BOARD_WIDTH-1:
            if not isBlockAt(board, uint(colIndex), uint(rowIndex)):
                isFull = false
                break
        
        if isFull:
            echo "Found full row at index ", rowIndex
            fullRowIndices.add(uint(rowIndex))
    
    # Clear full lines
    for rowIndex in fullRowIndices:
        for colIndex in 0..BOARD_WIDTH-1:
            board[rowIndex][colIndex] = gray

    # Drop all blocks
    # Reverse iteration, otherwise every iteration will re-drop the blocks dropped from the last line
    # -2 because we can ignore the last line
    for rowIndex in countDown(BOARD_HEIGHT-2, 0):
        for colIndex in 0..BOARD_WIDTH-1:
            # If there is no block at the current position we have nothing to do
            if not isBlockAt(board, uint(colIndex), uint(rowIndex)):
                discard 
            else:
                if not blockBelongsToTetronimo(tetronimo, uint(colIndex), (uint)rowIndex):
                    let nextRowIndex = rowIndex + 1
                    if not isBlockAt(board, uint(colIndex), uint(nextRowIndex)):
                        board[nextRowIndex][colIndex] = board[rowIndex][colIndex]
                        board[rowIndex][colIndex] = gray

    # Also update the y position of our active tetronimo
    if canDropTetronimo(board, tetronimo):
        # Clear the old position
        for b in tetronimo.shape[tetronimo.rotation.int]:
            let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
            board[boardCoord.y][boardCoord.x] = gray

        # Set the new position
        for b in tetronimo.shape[tetronimo.rotation.int]:
            let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
            board[boardCoord.y + 1][boardCoord.x] = tetronimo.color

        tetronimo.position.y = tetronimo.position.y + 1           


#
# Helper
#


proc printBoard(board: Board) =
    echo " __________"
    for rowIndex in 0..BOARD_HEIGHT-1:
        var strRow = "|"
        for colIndex in 0..BOARD_WIDTH-1:
          if board[rowIndex][colIndex] == gray:
            add(strRow, "0")
          else:
            add(strRow, "1")
        add(strRow, "|")
        echo strRow
    echo " __________"


#
# Movement
#


proc moveRight(board: var Board, tetronimo: var Tetronimo) =
    var canMoveRight = true
    for b in tetronimo.shape[tetronimo.rotation.int]:
        let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
        if boardCoord.x == BOARD_WIDTH - 1:
            canMoveRight = false
            break
        
        # Ignore collisions with ourselves
        if isBlockAt(board, boardCoord.x + 1, boardCoord.y) and not isOwnBlock(tetronimo, b.x, b.y):
            canMoveRight = false
            break
    
    if canMoveRight:
        # Clear existing blocks
        for b in tetronimo.shape[tetronimo.rotation.int]:
            let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
            board[boardCoord.y][boardCoord.x] = gray

        # Update new blocks
        for b in tetronimo.shape[tetronimo.rotation.int]:
            let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
            board[boardCoord.y][boardCoord.x + 1] = tetronimo.color
        tetronimo.position.x = tetronimo.position.x + 1
        

proc moveLeft(board: var Board, tetronimo: var Tetronimo) =
    var canMoveLeft = true
    for b in tetronimo.shape[tetronimo.rotation.int]:
        let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
        if boardCoord.x == 0:
            canMoveLeft = false
            break

        # Ignore collisions with ourselves
        if isBlockAt(board, boardCoord.x - 1, boardCoord.y) and not isOwnBlock(tetronimo, b.x, b.y):
            canMoveLeft = false
            break
    
    if canMoveLeft:
        # Update existing blocks
        for b in tetronimo.shape[tetronimo.rotation.int]:
            let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
            board[boardCoord.y][boardCoord.x] = gray

        # Update new blocks
        for b in tetronimo.shape[tetronimo.rotation.int]:
            let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
            board[boardCoord.y][boardCoord.x - 1] = tetronimo.color
        tetronimo.position.x = tetronimo.position.x - 1


#        
# Rotation
#


proc performRotation(board: var Board, tetronimo: var Tetronimo, newRotation: TetronimoRotation) =
    var canRotate = true
    let oldRotation = tetronimo.rotation

    for b in tetronimo.shape[newRotation.int]:
        let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
        if not tetronimo.shape[oldRotation.int].contains((uint(b.x), uint(b.y))):
            canRotate = not isBlockAt(board, boardCoord.x, boardCoord.y)
            if not canRotate:
                echo "Can't rotate to new orientation. Blocks in the way"
                discard
        else:
            echo "Found own block, skipping collision check."
        
    if canRotate:
        # Clear the blocks in the old rotation configuration
        # Update the blocks for the new rotation configuration
        for b in tetronimo.shape[oldRotation.int]:
            let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
            board[boardCoord.y][boardCoord.x] = gray
        for b in tetronimo.shape[newRotation.int]:
            let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
            board[boardCoord.y][boardCoord.x] = tetronimo.color
            tetronimo.rotation = newRotation


proc rotateLeft(tetronimo: var Tetronimo): TetronimoRotation =
    case tetronimo.rotation
    of R0:
        result = R3
    of R1:
        result = R0
    of R2:
        result = R1
    of R3:
        result = R2

proc rotateRight(tetronimo: var Tetronimo): TetronimoRotation =
    case tetronimo.rotation
    of R0:
        result = R1
    of R1:
        result = R2
    of R2:
        result = R3
    of R3:
        result = R0

proc generateTetronimoType(): TetronimoType =
    # TODO: Pick random shape
    randomize()
    case rand(6)
    of 0:
        result = I
    of 1:
        result = J
    of 2:
        result = L
    of 3:
        result = O
    of 4:
        result = S
    of 5:
        result = T
    of 6:
        result = Z
    else:
        result = I

proc newTetronimo(): Tetronimo =
    case generateTetronimoType()
    of I:
        result = (shape: SHAPE_I, position: (4'u, 0'u), rotation: R0, color: red)
    of J:
        result = (shape: SHAPE_J, position: (4'u, 0'u), rotation: R0, color: light_green)
    of L:
        result = (shape: SHAPE_L, position: (4'u, 0'u), rotation: R0, color: green)
    of O:
        result = (shape: SHAPE_O, position: (4'u, 0'u), rotation: R0, color: blue)
    of S:
        result = (shape: SHAPE_S, position: (4'u, 0'u), rotation: R0, color: orange)
    of T:
        result = (shape: SHAPE_T, position: (4'u, 0'u), rotation: R0, color: yellow)
    of Z:
        result = (shape: SHAPE_Z, position: (4'u, 0'u), rotation: R0, color: purple)

proc insertTetronimo(board: var Board): Tetronimo =
    let tetronimo = newTetronimo()
    for b in tetronimo.shape[0]:
        board[b.y + tetronimo.position.y][b.x + tetronimo.position.x] = tetronimo.color
    result = tetronimo