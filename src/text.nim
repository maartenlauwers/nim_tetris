import sdl2, sdl2/gfx, sdl2/image, sdl2.ttf

var font: FontPtr
var fontSmall: FontPtr

type
    SDLException = object of Exception

template sdlFailIf(cond: typed, reason: string) =
    if cond: raise SDLException.newException(
      reason & ", SDL error: " & $getError())

proc initTTF() =
    sdlFailIf(ttfInit() == SdlError): "SDL2 TTF initialization failed"
    font = openFont("Roboto-Light.ttf", 20)
    fontSmall = openFont("Roboto-Light.ttf", 16)
    sdlFailIf font.isNil: "Failed to load font"
    sdlFailIf fontSmall.isNil: "Failed to load font"
    
proc renderText(renderer: RendererPtr, font: FontPtr, text: string, x, y: cint, color: Color) =
    let surface = font.renderUtf8Blended(text.cstring, color)
    sdlFailIf surface.isNil: "Could not render text surface"
    discard surface.setSurfaceAlphaMod(color.a)
    var source = rect(0, 0, surface.w, surface.h)
    var dest = rect(x, y, surface.w, surface.h)
    let texture = renderer.createTextureFromSurface(surface)
    sdlFailIf texture.isNil: "Could not create texture from rendered text"
    surface.freeSurface()
    renderer.copyEx(texture, source, dest, angle = 0.0, center = nil,
                  flip = SDL_FLIP_NONE)
    texture.destroy()