include board
include graphics

# https://hookrace.net/blog/writing-a-2d-platform-game-in-nim-with-sdl2/

import sdl2, sdl2/gfx, sdl2/image
discard sdl2.init(INIT_EVERYTHING)

var
  window: WindowPtr
  render: RendererPtr
  board: Board
  activeTetronimo: Tetronimo
  activeRotation: TetronimoRotation

window = createWindow("Tetris", 100, 100, 320, 640, SDL_WINDOW_SHOWN)
render = createRenderer(window, -1, Renderer_Accelerated or Renderer_PresentVsync or Renderer_TargetTexture)
let texture = render.loadTexture("tetris.png")

board = [
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray],
  [gray,gray,gray,gray,gray,gray,gray,gray,gray,gray]
]

activeTetronimo = newTetronimo()
activeRotation = R0

proc getBlockTexture(color: BlockColor): Rect =
  case color
  of red:
    result = rect(0, 0, BLOCK_WIDTH, BLOCK_HEIGHT)
  of light_green:
    result = rect(32, 0, BLOCK_WIDTH, BLOCK_HEIGHT)
  of green:
    result = rect(64, 0, BLOCK_WIDTH, BLOCK_HEIGHT)
  of blue:
    result = rect(0, 32, BLOCK_WIDTH, BLOCK_HEIGHT)
  of orange:
    result = rect(32, 32, BLOCK_WIDTH, BLOCK_HEIGHT)
  of yellow:
    result = rect(64, 32, BLOCK_WIDTH, BLOCK_HEIGHT)
  of purple:
    result = rect(0, 64, BLOCK_WIDTH, BLOCK_HEIGHT)
  else:
    result = rect(32, 64, BLOCK_WIDTH, BLOCK_HEIGHT)

# Prep game
activeTetronimo = insertShape(board)

proc drawBlock(color: BlockColor, x,y: uint) =
  var source = getBlockTexture(color)
  var dest = rect(BLOCK_WIDTH * cint(x), BLOCK_HEIGHT * cint(y), BLOCK_WIDTH, BLOCK_HEIGHT)
  render.copyEx(texture, source, dest, angle = 0.0, center = nil, flip = SDL_FLIP_NONE)

proc drawBoard(board: Board) =
  for rowIndex in 0..BOARD_HEIGHT-1:
    for colIndex in 0..BOARD_WIDTH-1:
      let b = board[rowIndex][colIndex]
      drawBlock(b, uint(colIndex), uint(rowIndex))

var
  evt = sdl2.defaultEvent
  runGame = true
  fpsman: FpsManager
fpsman.init


while runGame:
  while pollEvent(evt):
    if evt.kind == QuitEvent:
      runGame = false
      break

  let dt = fpsman.getFramerate() / 1000

  render.setDrawColor 110,132,174,255
  render.clear
  drawBoard(board)
  render.present

  fpsman.delay

destroy render
destroy window