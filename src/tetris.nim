include board
include text

# https://hookrace.net/blog/writing-a-2d-platform-game-in-nim-with-sdl2/

import times
import strutils
import sdl2, sdl2/gfx, sdl2/image#, sdl2.ttf
discard sdl2.init(INIT_EVERYTHING)

var
  window: WindowPtr
  render: RendererPtr
  board: Board
  activeTetronimo: Tetronimo
  immediateMode: bool

window = createWindow("Tetris", 100, 100, 344, 680, SDL_WINDOW_SHOWN)
render = createRenderer(window, -1, Renderer_Accelerated or Renderer_PresentVsync or Renderer_TargetTexture)
let texture = render.loadTexture("tetris.png")
initTTF()

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
immediateMode = false
var requiredDelta: float = 0.2

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
activeTetronimo = insertTetronimo(board)

proc drawBlock(color: BlockColor, x,y: uint) =
  var source = getBlockTexture(color)
  var dest = rect(BLOCK_WIDTH * cint(x) + (cint(x) * cint(MARGIN)) + 2, BLOCK_HEIGHT * cint(y) + (cint(y) * cint(MARGIN)), BLOCK_WIDTH, BLOCK_HEIGHT)
  render.copyEx(texture, source, dest, angle = 0.0, center = nil, flip = SDL_FLIP_NONE)

proc drawBoard(board: Board) =
  for rowIndex in 0..BOARD_HEIGHT-1:
    for colIndex in 0..BOARD_WIDTH-1:
      let b = board[rowIndex][colIndex]
      drawBlock(b, uint(colIndex), uint(rowIndex))

proc handleInput(key: Scancode) =
  if key == SDL_SCANCODE_UP:
    let newRotation = rotateRight(activeTetronimo)
    performRotation(board, activeTetronimo, newRotation)
  elif key == SDL_SCANCODE_DOWN:
    let newRotation = rotateLeft(activeTetronimo)
    performRotation(board, activeTetronimo, newRotation)
  elif key == SDL_SCANCODE_RIGHT:
    moveRight(board, activeTetronimo)
  elif key == SDL_SCANCODE_LEFT:
    moveLeft(board, activeTetronimo)
  elif key == SDL_SCANCODE_SPACE:
    immediateMode = true
    requiredDelta = 0.02

var
  event = sdl2.defaultEvent
  runGame = true
  fpsman: FpsManager
  totalDelta: float = 0
fpsman.init

while runGame:
  while pollEvent(event):
    case event.kind
    of QuitEvent:
      runGame = false
      break
    of KeyUp:
      handleInput(event.key.keysym.scancode)
    else:
      break

  let dt = fpsman.getFramerate() / 1000 
  totalDelta = totalDelta + dt

  # if immediateMode:
  #   while not shouldGenerateNextTetronimo(board, activeTetronimo):
  #     applyGravity(board, activeTetronimo)
  #   immediateMode = false
  #   requiredDelta = 0.2

  if totalDelta >= requiredDelta:
    totalDelta = 0
    applyGravity(board, activeTetronimo)
    if shouldGenerateNextTetronimo(board, activeTetronimo):
      immediateMode = false
      requiredDelta = 0.2
      activeTetronimo = insertTetronimo(board)
      #prepareNextTetronimo()

  render.setDrawColor 239,239,239,255
  render.clear
  drawBoard(board)
  let strScore = intToStr(int(score))
  renderText(render, font, "Score", 8, 8, color(123,205,184,255))
  renderText(render, fontSmall, strScore, 8, 32, color(84,84,84,255))
  render.present
  fpsman.delay

#ttfQuit() 
destroy render
destroy window