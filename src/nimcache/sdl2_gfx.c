/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/Cellar/nim/0.18.0_1/nim/lib -o /Users/mlauwers/Downloads/nim/src/nimcache/sdl2_gfx.o /Users/mlauwers/Downloads/nim/src/nimcache/sdl2_gfx.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg;
typedef struct tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w;
typedef struct tyObject_FpsManager_K9c6YTNaeSVqIm8VozHdXPQ tyObject_FpsManager_K9c6YTNaeSVqIm8VozHdXPQ;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg;
typedef struct tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ;
typedef struct tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g;
typedef struct tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg;
typedef struct tyTuple_Xo4YhcsfLAmbGDNu1Obfcw tyTuple_Xo4YhcsfLAmbGDNu1Obfcw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NI32 tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw;
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_wkPMZnjZjZw2OH0ZFEkJHg) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x, NI16 y, NU32 color);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_OMBDAhQGokRrocyDYOut9bA) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x, NI16 y, NU8 r, NU8 g, NU8 b, NU8 a);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_wAcReU9av5d5dhJF6s2z9cmA) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x1, NI16 x2, NI16 y, NU32 color);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_9a9bXR02bAnA9avGodCLdA3Yw) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x1, NI16 x2, NI16 y, NU8 r, NU8 g, NU8 b, NU8 a);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_ECS3AZe9bYA5zZK5qSwY6qQ) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x1, NI16 y1, NI16 x2, NI16 y2, NU32 color);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_ZmA6ackxtfzeCM8DbYvQUw) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x1, NI16 y1, NI16 x2, NI16 y2, NU8 r, NU8 g, NU8 b, NU8 a);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_iC9bQ3lgjjOxNv6HDyHjTHQ) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x1, NI16 y1, NI16 x2, NI16 y2, NI16 rad, NU32 color);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_c9c6g0oMSuS7sFqNorHJmXA) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x1, NI16 y1, NI16 x2, NI16 y2, NI16 rad, NU8 r, NU8 g, NU8 b, NU8 a);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_XHYXzJMO7A7cGd9arA0stkQ) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x1, NI16 y1, NI16 x2, NI16 y2, NU8 width, NU32 color);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_0v4KOOdnJj4FJzDnGBoMGQ) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x1, NI16 y1, NI16 x2, NI16 y2, NU8 width, NU8 r, NU8 g, NU8 b, NU8 a);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_Bug6mehJgFxLO1qk30bTXQ) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x1, NI16 y1, NI16 x2, NI16 y2, NI16 x3, NI16 y3, NU32 color);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_Kr9aPlHuKf05WMn9aCVviqVQ) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x1, NI16 y1, NI16 x2, NI16 y2, NI16 x3, NI16 y3, NU8 r, NU8 g, NU8 b, NU8 a);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_yMeh3BbYWDINww3CeJjORA) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16* vx, NI16* vy, int n, NU32 color);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_5gNWev9c2Qzyw5dycNGR61g) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16* vx, NI16* vy, int n, NU8 r, NU8 g, NU8 b, NU8 a);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_6j4p40EgoLLQX6R79b9aEf6w) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16* vx, NI16* vy, int n, tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w* texture, int texture_dx, int texture_dy);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_qx5zX4567Q4v9buCUa2QRPQ) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16* vx, NI16* vy, int n, int s, NU32 color);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_g0wmKjZIx2CKchVIivt4qw) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16* vx, NI16* vy, int n, int s, NU8 r, NU8 g, NU8 b, NU8 a);
typedef N_CDECL_PTR(void, tyProc_rpU67nzC5WaSfXPDEajeiA) (void* fontdata, NU32 cw, NU32 ch);
typedef N_CDECL_PTR(void, tyProc_CGFSM2Hc7U0HyNmEEh3xng) (NU32 rotation);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_P6YR83IcQpiWoswqYLUI2Q) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x, NI16 y, NIM_CHAR c, NU32 color);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_PAcinBbvLNqjPV0IlcrKqQ) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x, NI16 y, NIM_CHAR c, NU8 r, NU8 g, NU8 b, NU8 a);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_MXkv5IxfY9bZj81i9a9crn8Bw) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x, NI16 y, NCSTRING s, NU32 color);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_pGX7J8RmO9bHfrRyIJDfj9cg) (tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x, NI16 y, NCSTRING s, NU8 r, NU8 g, NU8 b, NU8 a);
typedef N_CDECL_PTR(tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w*, tyProc_uBLnUlai0H2AL9cP9bC9bkPRQ) (tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w* src, double angle, double zoom, int smooth);
typedef N_CDECL_PTR(tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w*, tyProc_5mG9cxMkDSnQwx7FaxpGnxA) (tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w* src, double angle, double zoomX, double zoomY, int smooth);
typedef N_CDECL_PTR(void, tyProc_7aODsesZrN3nuY2C9cumQuw) (int width, int height, double angle, double zoom, int* dstwidth, int* dstheight);
typedef N_CDECL_PTR(void, tyProc_KxGOzAADsojOgXxQmgBMYA) (int width, int height, double angle, double zoomX, double zoomY, int* dstwidth, int* dstheight);
typedef N_CDECL_PTR(tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w*, tyProc_dk875DrqztzEOMyQqDXmxw) (tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w* src, int factorx, int factorY);
typedef N_CDECL_PTR(tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w*, tyProc_QCFVQRUlhavmhnj9b9cOwzWg) (tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w* src, int numClockwiseTurns);
typedef N_CDECL_PTR(void, tyProc_cfgfzj4BFRc9cgaCE88zYLQ) (tyObject_FpsManager_K9c6YTNaeSVqIm8VozHdXPQ* manager);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_3n0nJjwgO9ci8bP1XHITpag) (tyObject_FpsManager_K9c6YTNaeSVqIm8VozHdXPQ* manager, int rate);
typedef N_CDECL_PTR(int, tyProc_2nApE2oRVV9bdZ01fOBEbDg) (tyObject_FpsManager_K9c6YTNaeSVqIm8VozHdXPQ* manager);
struct tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg {
char dummy;
};
struct tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ {
int Field0;
int Field1;
int Field2;
int Field3;
};
struct tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w {
NU32 flags;
tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg* format;
NI32 w;
NI32 h;
NI32 pitch;
void* pixels;
void* userdata;
NI32 locked;
void* lock_data;
tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ clip_rect;
tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g* map;
int refcount;
};
struct tyObject_FpsManager_K9c6YTNaeSVqIm8VozHdXPQ {
int framecount;
float rateticks;
int baseticks;
int lastticks;
int rate;
};
typedef NU8 tyArray_bN9bddWn8oiNSHn2MqEJSZQ[2];
struct tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg {
NU32 format;
tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg* palette;
NU8 BitsPerPixel;
NU8 BytesPerPixel;
tyArray_bN9bddWn8oiNSHn2MqEJSZQ padding;
NU32 Rmask;
NU32 Gmask;
NU32 Bmask;
NU32 Amask;
NU8 Rloss;
NU8 Gloss;
NU8 Bloss;
NU8 Aloss;
NU8 Rshift;
NU8 Gshift;
NU8 Bshift;
NU8 Ashift;
int refcount;
tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg* next;
};
struct tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g {
char dummy;
};
struct tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg {
int ncolors;
tyTuple_Xo4YhcsfLAmbGDNu1Obfcw* colors;
NU32 version;
int refcount;
};
struct tyTuple_Xo4YhcsfLAmbGDNu1Obfcw {
NU8 Field0;
NU8 Field1;
NU8 Field2;
NU8 Field3;
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
N_LIB_PRIVATE N_NIMCALL(void, mlStringRGBA_dRHQdYbRZC89a07k6mHtHAw)(tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x, NI16 y, NimStringDesc* S, NU8 R, NU8 G, NU8 B, NU8 A, NI16 lineSpacing);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, mlStringRGBA_pVv0WTD9bz2wxopgCMmyEow)(tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x, NI16 y, tySequence_sM4lkSb7zS6F7OVMvW9cffQ* S, NU8 R, NU8 G, NU8 B, NU8 A, NI16 lineSpacing);
static void* TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2;
tyProc_wkPMZnjZjZw2OH0ZFEkJHg Dl_170601_;
tyProc_OMBDAhQGokRrocyDYOut9bA Dl_170607_;
tyProc_wAcReU9av5d5dhJF6s2z9cmA Dl_170616_;
tyProc_9a9bXR02bAnA9avGodCLdA3Yw Dl_170623_;
tyProc_wAcReU9av5d5dhJF6s2z9cmA Dl_170633_;
tyProc_9a9bXR02bAnA9avGodCLdA3Yw Dl_170640_;
tyProc_ECS3AZe9bYA5zZK5qSwY6qQ Dl_170650_;
tyProc_ZmA6ackxtfzeCM8DbYvQUw Dl_170658_;
tyProc_iC9bQ3lgjjOxNv6HDyHjTHQ Dl_170669_;
tyProc_c9c6g0oMSuS7sFqNorHJmXA Dl_170678_;
tyProc_ECS3AZe9bYA5zZK5qSwY6qQ Dl_170690_;
tyProc_ZmA6ackxtfzeCM8DbYvQUw Dl_170698_;
tyProc_iC9bQ3lgjjOxNv6HDyHjTHQ Dl_170709_;
tyProc_c9c6g0oMSuS7sFqNorHJmXA Dl_170718_;
tyProc_ECS3AZe9bYA5zZK5qSwY6qQ Dl_170730_;
tyProc_ZmA6ackxtfzeCM8DbYvQUw Dl_170738_;
tyProc_ECS3AZe9bYA5zZK5qSwY6qQ Dl_170749_;
tyProc_ZmA6ackxtfzeCM8DbYvQUw Dl_170757_;
tyProc_XHYXzJMO7A7cGd9arA0stkQ Dl_170768_;
tyProc_0v4KOOdnJj4FJzDnGBoMGQ Dl_170777_;
tyProc_wAcReU9av5d5dhJF6s2z9cmA Dl_170789_;
tyProc_9a9bXR02bAnA9avGodCLdA3Yw Dl_170796_;
tyProc_iC9bQ3lgjjOxNv6HDyHjTHQ Dl_170806_;
tyProc_c9c6g0oMSuS7sFqNorHJmXA Dl_170815_;
tyProc_wAcReU9av5d5dhJF6s2z9cmA Dl_170827_;
tyProc_9a9bXR02bAnA9avGodCLdA3Yw Dl_170834_;
tyProc_wAcReU9av5d5dhJF6s2z9cmA Dl_170844_;
tyProc_9a9bXR02bAnA9avGodCLdA3Yw Dl_170851_;
tyProc_ECS3AZe9bYA5zZK5qSwY6qQ Dl_170861_;
tyProc_ZmA6ackxtfzeCM8DbYvQUw Dl_170869_;
tyProc_ECS3AZe9bYA5zZK5qSwY6qQ Dl_170880_;
tyProc_ZmA6ackxtfzeCM8DbYvQUw Dl_170888_;
tyProc_ECS3AZe9bYA5zZK5qSwY6qQ Dl_170899_;
tyProc_ZmA6ackxtfzeCM8DbYvQUw Dl_170907_;
tyProc_iC9bQ3lgjjOxNv6HDyHjTHQ Dl_170918_;
tyProc_c9c6g0oMSuS7sFqNorHJmXA Dl_170927_;
tyProc_iC9bQ3lgjjOxNv6HDyHjTHQ Dl_170939_;
tyProc_c9c6g0oMSuS7sFqNorHJmXA Dl_170948_;
tyProc_Bug6mehJgFxLO1qk30bTXQ Dl_170960_;
tyProc_Kr9aPlHuKf05WMn9aCVviqVQ Dl_170970_;
tyProc_Bug6mehJgFxLO1qk30bTXQ Dl_170983_;
tyProc_Kr9aPlHuKf05WMn9aCVviqVQ Dl_170993_;
tyProc_Bug6mehJgFxLO1qk30bTXQ Dl_171006_;
tyProc_Kr9aPlHuKf05WMn9aCVviqVQ Dl_171016_;
tyProc_yMeh3BbYWDINww3CeJjORA Dl_171029_;
tyProc_5gNWev9c2Qzyw5dycNGR61g Dl_171038_;
tyProc_yMeh3BbYWDINww3CeJjORA Dl_171050_;
tyProc_5gNWev9c2Qzyw5dycNGR61g Dl_171059_;
tyProc_yMeh3BbYWDINww3CeJjORA Dl_171071_;
tyProc_5gNWev9c2Qzyw5dycNGR61g Dl_171080_;
tyProc_6j4p40EgoLLQX6R79b9aEf6w Dl_171092_;
tyProc_qx5zX4567Q4v9buCUa2QRPQ Dl_171103_;
tyProc_g0wmKjZIx2CKchVIivt4qw Dl_171112_;
tyProc_rpU67nzC5WaSfXPDEajeiA Dl_171124_;
tyProc_CGFSM2Hc7U0HyNmEEh3xng Dl_171129_;
tyProc_P6YR83IcQpiWoswqYLUI2Q Dl_171132_;
tyProc_PAcinBbvLNqjPV0IlcrKqQ Dl_171139_;
tyProc_MXkv5IxfY9bZj81i9a9crn8Bw Dl_171149_;
tyProc_pGX7J8RmO9bHfrRyIJDfj9cg Dl_171156_;
tyProc_uBLnUlai0H2AL9cP9bC9bkPRQ Dl_171166_;
tyProc_5mG9cxMkDSnQwx7FaxpGnxA Dl_171172_;
tyProc_7aODsesZrN3nuY2C9cumQuw Dl_171179_;
tyProc_KxGOzAADsojOgXxQmgBMYA Dl_171188_;
tyProc_uBLnUlai0H2AL9cP9bC9bkPRQ Dl_171198_;
tyProc_7aODsesZrN3nuY2C9cumQuw Dl_171204_;
tyProc_dk875DrqztzEOMyQqDXmxw Dl_171213_;
tyProc_QCFVQRUlhavmhnj9b9cOwzWg Dl_171218_;
tyProc_cfgfzj4BFRc9cgaCE88zYLQ Dl_171222_;
tyProc_3n0nJjwgO9ci8bP1XHITpag Dl_171226_;
tyProc_2nApE2oRVV9bdZ01fOBEbDg Dl_171231_;
tyProc_2nApE2oRVV9bdZ01fOBEbDg Dl_171235_;
tyProc_2nApE2oRVV9bdZ01fOBEbDg Dl_171239_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_4, "libSDL2_gfx.dylib", 17);
STRING_LITERAL(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_5, "libSDL2_gfx.dylib", 17);

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_LIB_PRIVATE N_NIMCALL(void, mlStringRGBA_dRHQdYbRZC89a07k6mHtHAw)(tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x, NI16 y, NimStringDesc* S, NU8 R, NU8 G, NU8 B, NU8 A, NI16 lineSpacing) {
	NI ln;
	nimfr_("mlStringRGBA", "gfx.nim");
	nimln_(247, "gfx.nim");
	ln = ((NI) 0);
	{
		NimStringDesc* L;
		NI first;
		NI last;
		L = (NimStringDesc*)0;
		nimln_(776, "strutils.nim");
		first = ((NI) 0);
		nimln_(777, "strutils.nim");
		last = ((NI) 0);
		{
			nimln_(778, "strutils.nim");
			while (1) {
				NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_151;
				NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_152;
				NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_153;
				NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_154;
				NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_155;
				tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw T6_;
				NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_156;
				{
					nimln_(779, "strutils.nim");
					while (1) {
						NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_150;
						nimln_(1212, "system.nim");
						nimln_(779, "strutils.nim");
						if ((NU)(last) > (NU)(S->Sup.len)) raiseIndexError();
						if (!!((((NU8)(S->data[last])) == ((NU8)(0)) || ((NU8)(S->data[last])) == ((NU8)(13)) || ((NU8)(S->data[last])) == ((NU8)(10))))) goto LA5;
						TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_150 = addInt(last, ((NI) 1));
						last = (NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_150);
					} LA5: ;
				}
				nimln_(780, "strutils.nim");
				TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_151 = subInt(last, ((NI) 1));
				L = copyStrLast(S, first, (NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_151));
				nimln_(249, "gfx.nim");
				TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_152 = mulInt(ln, ((NI) 8));
				TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_153 = addInt(y, ((NI16)chckRange((NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_152), ((NI16) -32768), ((NI16) 32767))));
				if (TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_153 < -32768 || TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_153 > 32767) raiseOverflow();
				TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_154 = mulInt(ln, ((NI) (lineSpacing)));
				TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_155 = addInt((NI16)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_153), ((NI16)chckRange((NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_154), ((NI16) -32768), ((NI16) 32767))));
				if (TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_155 < -32768 || TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_155 > 32767) raiseOverflow();
				T6_ = (tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw)0;
				T6_ = Dl_171156_(renderer, x, (NI16)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_155), L->data, R, G, B, A);
				nimln_(250, "gfx.nim");
				TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_156 = addInt(ln, ((NI) 1));
				ln = (NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_156);
				nimln_(782, "strutils.nim");
				{
					NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_157;
					if ((NU)(last) > (NU)(S->Sup.len)) raiseIndexError();
					if (!((NU8)(S->data[last]) == (NU8)(10))) goto LA9_;
					TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_157 = addInt(last, ((NI) 1));
					last = (NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_157);
				}
				goto LA7_;
				LA9_: ;
				{
					NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_158;
					nimln_(783, "strutils.nim");
					if ((NU)(last) > (NU)(S->Sup.len)) raiseIndexError();
					if (!((NU8)(S->data[last]) == (NU8)(13))) goto LA12_;
					nimln_(784, "strutils.nim");
					TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_158 = addInt(last, ((NI) 1));
					last = (NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_158);
					nimln_(785, "strutils.nim");
					{
						NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_159;
						if ((NU)(last) > (NU)(S->Sup.len)) raiseIndexError();
						if (!((NU8)(S->data[last]) == (NU8)(10))) goto LA16_;
						TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_159 = addInt(last, ((NI) 1));
						last = (NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_159);
					}
					LA16_: ;
				}
				goto LA7_;
				LA12_: ;
				{
					nimln_(786, "strutils.nim");
					goto LA2;
				}
				LA7_: ;
				nimln_(787, "strutils.nim");
				first = last;
			}
		} LA2: ;
	}
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, mlStringRGBA_pVv0WTD9bz2wxopgCMmyEow)(tyObject_RendererPtrcolonObjectType__RZ5I89cPVLRdJchBQYVCSfg* renderer, NI16 x, NI16 y, tySequence_sM4lkSb7zS6F7OVMvW9cffQ* S, NU8 R, NU8 G, NU8 B, NU8 A, NI16 lineSpacing) {
	NI ln;
	nimfr_("mlStringRGBA", "gfx.nim");
	nimln_(252, "gfx.nim");
	ln = ((NI) 0);
	{
		nimln_(253, "gfx.nim");
		while (1) {
			NI T3_;
			NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_160;
			NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_161;
			NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_162;
			NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_163;
			tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw T4_;
			NI TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_164;
			T3_ = (S ? S->Sup.len : 0);
			if (!(ln < T3_)) goto LA2;
			nimln_(254, "gfx.nim");
			TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_160 = mulInt(ln, ((NI) 8));
			TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_161 = mulInt(ln, ((NI) (lineSpacing)));
			TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_162 = addInt((NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_160), (NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_161));
			TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_163 = addInt(y, ((NI16)chckRange((NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_162), ((NI16) -32768), ((NI16) 32767))));
			if (TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_163 < -32768 || TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_163 > 32767) raiseOverflow();
			if ((NU)(ln) >= (NU)(S->Sup.len)) raiseIndexError();
			T4_ = (tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw)0;
			T4_ = Dl_171156_(renderer, x, (NI16)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_163), S->data[ln]->data, R, G, B, A);
			nimln_(255, "gfx.nim");
			TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_164 = addInt(ln, ((NI) 1));
			ln = (NI)(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_164);
		} LA2: ;
	}
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, sdl2_gfxInit000)(void) {
	nimfr_("gfx", "gfx.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, sdl2_gfxDatInit000)(void) {
if (!((TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2 = nimLoadLibrary((NimStringDesc*) &TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_4))
)) nimLoadLibraryError((NimStringDesc*) &TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_5);
	Dl_170601_ = (tyProc_wkPMZnjZjZw2OH0ZFEkJHg) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "pixelColor");
	Dl_170607_ = (tyProc_OMBDAhQGokRrocyDYOut9bA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "pixelRGBA");
	Dl_170616_ = (tyProc_wAcReU9av5d5dhJF6s2z9cmA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "hlineColor");
	Dl_170623_ = (tyProc_9a9bXR02bAnA9avGodCLdA3Yw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "hlineRGBA");
	Dl_170633_ = (tyProc_wAcReU9av5d5dhJF6s2z9cmA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "vlineColor");
	Dl_170640_ = (tyProc_9a9bXR02bAnA9avGodCLdA3Yw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "vlineRGBA");
	Dl_170650_ = (tyProc_ECS3AZe9bYA5zZK5qSwY6qQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "rectangleColor");
	Dl_170658_ = (tyProc_ZmA6ackxtfzeCM8DbYvQUw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "rectangleRGBA");
	Dl_170669_ = (tyProc_iC9bQ3lgjjOxNv6HDyHjTHQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "roundedRectangleColor");
	Dl_170678_ = (tyProc_c9c6g0oMSuS7sFqNorHJmXA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "roundedRectangleRGBA");
	Dl_170690_ = (tyProc_ECS3AZe9bYA5zZK5qSwY6qQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "boxColor");
	Dl_170698_ = (tyProc_ZmA6ackxtfzeCM8DbYvQUw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "boxRGBA");
	Dl_170709_ = (tyProc_iC9bQ3lgjjOxNv6HDyHjTHQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "roundedBoxColor");
	Dl_170718_ = (tyProc_c9c6g0oMSuS7sFqNorHJmXA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "roundedBoxRGBA");
	Dl_170730_ = (tyProc_ECS3AZe9bYA5zZK5qSwY6qQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "lineColor");
	Dl_170738_ = (tyProc_ZmA6ackxtfzeCM8DbYvQUw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "lineRGBA");
	Dl_170749_ = (tyProc_ECS3AZe9bYA5zZK5qSwY6qQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "aalineColor");
	Dl_170757_ = (tyProc_ZmA6ackxtfzeCM8DbYvQUw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "aalineRGBA");
	Dl_170768_ = (tyProc_XHYXzJMO7A7cGd9arA0stkQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "thickLineColor");
	Dl_170777_ = (tyProc_0v4KOOdnJj4FJzDnGBoMGQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "thickLineRGBA");
	Dl_170789_ = (tyProc_wAcReU9av5d5dhJF6s2z9cmA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "circleColor");
	Dl_170796_ = (tyProc_9a9bXR02bAnA9avGodCLdA3Yw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "circleRGBA");
	Dl_170806_ = (tyProc_iC9bQ3lgjjOxNv6HDyHjTHQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "arcColor");
	Dl_170815_ = (tyProc_c9c6g0oMSuS7sFqNorHJmXA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "arcRGBA");
	Dl_170827_ = (tyProc_wAcReU9av5d5dhJF6s2z9cmA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "aacircleColor");
	Dl_170834_ = (tyProc_9a9bXR02bAnA9avGodCLdA3Yw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "aacircleRGBA");
	Dl_170844_ = (tyProc_wAcReU9av5d5dhJF6s2z9cmA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "filledCircleColor");
	Dl_170851_ = (tyProc_9a9bXR02bAnA9avGodCLdA3Yw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "filledCircleRGBA");
	Dl_170861_ = (tyProc_ECS3AZe9bYA5zZK5qSwY6qQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "ellipseColor");
	Dl_170869_ = (tyProc_ZmA6ackxtfzeCM8DbYvQUw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "ellipseRGBA");
	Dl_170880_ = (tyProc_ECS3AZe9bYA5zZK5qSwY6qQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "aaellipseColor");
	Dl_170888_ = (tyProc_ZmA6ackxtfzeCM8DbYvQUw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "aaellipseRGBA");
	Dl_170899_ = (tyProc_ECS3AZe9bYA5zZK5qSwY6qQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "filledEllipseColor");
	Dl_170907_ = (tyProc_ZmA6ackxtfzeCM8DbYvQUw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "filledEllipseRGBA");
	Dl_170918_ = (tyProc_iC9bQ3lgjjOxNv6HDyHjTHQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "pieColor");
	Dl_170927_ = (tyProc_c9c6g0oMSuS7sFqNorHJmXA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "pieRGBA");
	Dl_170939_ = (tyProc_iC9bQ3lgjjOxNv6HDyHjTHQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "filledPieColor");
	Dl_170948_ = (tyProc_c9c6g0oMSuS7sFqNorHJmXA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "filledPieRGBA");
	Dl_170960_ = (tyProc_Bug6mehJgFxLO1qk30bTXQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "trigonColor");
	Dl_170970_ = (tyProc_Kr9aPlHuKf05WMn9aCVviqVQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "trigonRGBA");
	Dl_170983_ = (tyProc_Bug6mehJgFxLO1qk30bTXQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "aatrigonColor");
	Dl_170993_ = (tyProc_Kr9aPlHuKf05WMn9aCVviqVQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "aatrigonRGBA");
	Dl_171006_ = (tyProc_Bug6mehJgFxLO1qk30bTXQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "filledTrigonColor");
	Dl_171016_ = (tyProc_Kr9aPlHuKf05WMn9aCVviqVQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "filledTrigonRGBA");
	Dl_171029_ = (tyProc_yMeh3BbYWDINww3CeJjORA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "polygonColor");
	Dl_171038_ = (tyProc_5gNWev9c2Qzyw5dycNGR61g) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "polygonRGBA");
	Dl_171050_ = (tyProc_yMeh3BbYWDINww3CeJjORA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "aapolygonColor");
	Dl_171059_ = (tyProc_5gNWev9c2Qzyw5dycNGR61g) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "aapolygonRGBA");
	Dl_171071_ = (tyProc_yMeh3BbYWDINww3CeJjORA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "filledPolygonColor");
	Dl_171080_ = (tyProc_5gNWev9c2Qzyw5dycNGR61g) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "filledPolygonRGBA");
	Dl_171092_ = (tyProc_6j4p40EgoLLQX6R79b9aEf6w) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "texturedPolygon");
	Dl_171103_ = (tyProc_qx5zX4567Q4v9buCUa2QRPQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "bezierColor");
	Dl_171112_ = (tyProc_g0wmKjZIx2CKchVIivt4qw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "bezierRGBA");
	Dl_171124_ = (tyProc_rpU67nzC5WaSfXPDEajeiA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "gfxPrimitivesSetFont");
	Dl_171129_ = (tyProc_CGFSM2Hc7U0HyNmEEh3xng) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "gfxPrimitivesSetFontRotation");
	Dl_171132_ = (tyProc_P6YR83IcQpiWoswqYLUI2Q) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "characterColor");
	Dl_171139_ = (tyProc_PAcinBbvLNqjPV0IlcrKqQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "characterRGBA");
	Dl_171149_ = (tyProc_MXkv5IxfY9bZj81i9a9crn8Bw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "stringColor");
	Dl_171156_ = (tyProc_pGX7J8RmO9bHfrRyIJDfj9cg) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "stringRGBA");
	Dl_171166_ = (tyProc_uBLnUlai0H2AL9cP9bC9bkPRQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "rotozoomSurface");
	Dl_171172_ = (tyProc_5mG9cxMkDSnQwx7FaxpGnxA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "rotozoomSurfaceXY");
	Dl_171179_ = (tyProc_7aODsesZrN3nuY2C9cumQuw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "rotozoomSurfaceSize");
	Dl_171188_ = (tyProc_KxGOzAADsojOgXxQmgBMYA) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "rotozoomSurfaceSizeXY");
	Dl_171198_ = (tyProc_uBLnUlai0H2AL9cP9bC9bkPRQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "zoomSurface");
	Dl_171204_ = (tyProc_7aODsesZrN3nuY2C9cumQuw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "zoomSurfaceSize");
	Dl_171213_ = (tyProc_dk875DrqztzEOMyQqDXmxw) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "shrinkSurface");
	Dl_171218_ = (tyProc_QCFVQRUlhavmhnj9b9cOwzWg) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "rotateSurface90Degrees");
	Dl_171222_ = (tyProc_cfgfzj4BFRc9cgaCE88zYLQ) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "SDL_initFramerate");
	Dl_171226_ = (tyProc_3n0nJjwgO9ci8bP1XHITpag) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "SDL_setFramerate");
	Dl_171231_ = (tyProc_2nApE2oRVV9bdZ01fOBEbDg) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "SDL_getFramerate");
	Dl_171235_ = (tyProc_2nApE2oRVV9bdZ01fOBEbDg) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "SDL_getFramecount");
	Dl_171239_ = (tyProc_2nApE2oRVV9bdZ01fOBEbDg) nimGetProcAddr(TM_J9c69cz9aUcMhvoFxChn9cEM9aQ_2, "SDL_framerateDelay");
}
