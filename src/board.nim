import random

const BOARD_WIDTH: uint = 10
const BOARD_HEIGHT: uint = 20

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
    Tetronimo = tuple[shape: TetronimoTemplate, position: tuple[x,y: uint], rotation: TetronimoRotation]

type
    Board = array[0..19, array[0..9, BlockColor]]

type
    Coord = tuple[x, y: uint]

type
    ShapePosition = tuple[x,y: uint]

const SHAPE_I: TetronimoTemplate = [
    [(0'u,0'u),(0'u,1'u),(0'u,2'u),(0'u,3'u)],
    [(0'u,0'u),(1'u,0'u),(2'u,0'u),(3'u,0'u)],
    [(0'u,0'u),(0'u,1'u),(0'u,2'u),(0'u,3'u)],
    [(0'u,0'u),(1'u,0'u),(2'u,0'u),(3'u,0'u)]
]

type
    Block = tuple[x,y: uint, color: BlockColor]

proc isBlockAt(board: Board; x, y: uint): bool =
  assert(x < BOARD_WIDTH)
  assert(y < BOARD_HEIGHT)
  result = not (board[y][x] == gray)

proc isOwnBlock(tetronimo: Tetronimo, x,y: uint): bool =
    result = tetronimo.shape[tetronimo.rotation.int].contains((x,y))

proc isActiveTetronimoBlock(tetronimo: Tetronimo, x,y: uint): bool = 
    var isActiveTetronimoBlock = false
    for b in tetronimo.shape[tetronimo.rotation.int]:
        let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
        if x == boardCoord.x and y == boardCoord.y:
            isActiveTetronimoBlock = true
            break

    result = isActiveTetronimoBlock

proc applyGravity(board: var Board, activeTetronimo: var Tetronimo) =
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
                let nextRowIndex = rowIndex + 1
                if not isBlockAt(board, uint(colIndex), uint(nextRowIndex)):
                    board[nextRowIndex][colIndex] = board[rowIndex][colIndex]
                    board[rowIndex][colIndex] = gray
                    
    # Also update the y position of our active tetronimo
    activeTetronimo.position.y = activeTetronimo.position.y + 1
                        


proc shouldGenerateNextTetronimo(board: Board, tetronimo: Tetronimo): bool = 
    var canDropFurther = true
    for b in tetronimo.shape[tetronimo.rotation.int]:
        let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
        echo "Board coordinates for active tetronimo: ", boardCoord.x, ", ", boardCoord.y
        if boardCoord.y < BOARD_HEIGHT-1:
            if isOwnBlock(tetronimo, b.x, b.y+1):
                break

            echo "Checking isBlockAt"
            if isBlockAt(board, boardCoord.x, boardCoord.y+1):
                canDropFurther = false
        else:
            canDropFurther = false
            
    echo "shouldgenerate = ", canDropFurther
    result = canDropFurther
    result = false

#
# Helper
#


proc printBoard(board: Board) =
    echo " __________"
    for rowIndex in 0..BOARD_HEIGHT-1:
        var strRow = "|"
        for colIndex in 0..BOARD_WIDTH-1:
          let b = board[rowIndex][colIndex]
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
    # Test if we have space to move right
    echo "Tet p.y = ", tetronimo.position.y
    var canMoveRight = true
    for b in tetronimo.shape[tetronimo.rotation.int]:
        let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
        if boardCoord.x == BOARD_WIDTH - 1:
            canMoveRight = false
            break
        
        if isBlockAt(board, boardCoord.x + 1, boardCoord.y):
            canMoveRight = false
            break
    
    if canMoveRight:
        for b in tetronimo.shape[tetronimo.rotation.int]:
            let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
            board[boardCoord.y][boardCoord.x] = gray
            board[boardCoord.y][boardCoord.x + 1] = red
        tetronimo.position.x = tetronimo.position.x + 1
            

proc moveLeft(board: var Board, tetronimo: var Tetronimo) =
    # Test if we have space to move left
    var canMoveLeft = true
    for b in tetronimo.shape[tetronimo.rotation.int]:
        let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
        if boardCoord.x == 0:
            canMoveLeft = false
            break
        
        if isBlockAt(board, boardCoord.x - 1, boardCoord.y):
            canMoveLeft = false
            break
    
    if canMoveLeft:
        for b in tetronimo.shape[tetronimo.rotation.int]:
            let boardCoord: Coord = (b.x + tetronimo.position.x, b.y + tetronimo.position.y)
            board[boardCoord.y][boardCoord.x] = gray
            board[boardCoord.y][boardCoord.x - 1] = red
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
            echo "Checking ", b.x, ",", b.y
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
            board[boardCoord.y][boardCoord.x] = red
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
        result = (shape: SHAPE_I, position: (4'u, 0'u), rotation: R0)
    of J:
        result = (shape: SHAPE_I, position: (4'u, 0'u), rotation: R0)
    of L:
        result = (shape: SHAPE_I, position: (4'u, 0'u), rotation: R0)
    of O:
        result = (shape: SHAPE_I, position: (4'u, 0'u), rotation: R0)
    of S:
        result = (shape: SHAPE_I, position: (4'u, 0'u), rotation: R0)
    of T:
        result = (shape: SHAPE_I, position: (4'u, 0'u), rotation: R0)
    of Z:
        result = (shape: SHAPE_I, position: (4'u, 0'u), rotation: R0)

proc insertTetronimo(board: var Board): Tetronimo =
    let tetronimo = newTetronimo()
    for b in tetronimo.shape[0]:
        board[b.y + tetronimo.position.y][b.x + tetronimo.position.x] = red
    result = tetronimo