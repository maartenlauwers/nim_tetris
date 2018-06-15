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
    Tetronimo = array[0..3, array[0..3, tuple[x,y: int]]]
    
type 
    TetronimoType = enum
        I, J, L, O, S, T, Z

type
    Board = array[0..19, array[0..9, BlockColor]]

type
    ShapePosition = tuple[x,y: uint]

const SHAPE_I: Tetronimo = [
    [(0,0),(0,1),(0,2),(0,3)],
    [(0,0),(1,0),(2,0),(3,0)],
    [(0,0),(0,1),(0,2),(0,3)],
    [(0,0),(1,0),(2,0),(3,0)]
]

type
    Block = tuple[x,y: uint, color: BlockColor]

proc isBlockAt(board: Board; x, y: uint): bool =
  assert(x < BOARD_WIDTH)
  assert(y < BOARD_HEIGHT)
  result = board[y][x] == gray

# proc setBlockAt(board: var Board; x, y: uint) =
#   board[y][x] = red

# proc removeBlockAt(board: var Board; x, y: uint) =
#   board[y][x] = gray

proc dropBlockAt(board: var Board; x, y: uint) = 
  if not isBlockAt(board, x, y+1) and y < BOARD_HEIGHT - 1:
    board[y+1][x] = board[y][x]

proc rotateLeft(currentRotation: TetronimoRotation): TetronimoRotation =
    case currentRotation
    of R0:
        result = R3
    of R1:
        result = R0
    of R2:
        result = R1
    of R3:
        result = R2

proc rotateRight(currentRotation: TetronimoRotation): TetronimoRotation =
    case currentRotation
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
        result = SHAPE_I
    of J:
        result = SHAPE_I
    of L:
        result = SHAPE_I
    of O:
        result = SHAPE_I
    of S:
        result = SHAPE_I
    of T:
        result = SHAPE_I
    of Z:
        result = SHAPE_I

proc insertShape(board: var Board): Tetronimo =
    let tetronimo = newTetronimo()
    for b in tetronimo[0]:
        board[b.y][b.x] = red
    result = tetronimo