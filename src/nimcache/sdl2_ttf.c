/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/Cellar/nim/0.18.0_1/nim/lib -o /Users/mlauwers/Development/nim/nim_tetris/src/nimcache/sdl2_ttf.o /Users/mlauwers/Development/nim/nim_tetris/src/nimcache/sdl2_ttf.c */
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
typedef struct tyObject_FontPtrcolonObjectType__aRlNW02x3t1nWe9bTYP3kng tyObject_FontPtrcolonObjectType__aRlNW02x3t1nWe9bTYP3kng;
typedef struct tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w;
typedef struct tyTuple_Xo4YhcsfLAmbGDNu1Obfcw tyTuple_Xo4YhcsfLAmbGDNu1Obfcw;
typedef struct tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg tyObject_PixelFormat_xqbq9cabb4AcV4cRzuGg5Dg;
typedef struct tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ tyTuple_Ye8PLO8qqXk1tek2VP9c0UQ;
typedef struct tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g tyObject_BlitMapPtrcolonObjectType__uPOUAQyskDVXmxvDq3Wk3g;
typedef struct tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg tyObject_Palette_D3H7z9cPmFr0tk2z8jKdcYg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NI32 tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw;
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_N8sad65Ws1y1PTmoH30cgg) (void);
typedef N_CDECL_PTR(tyObject_FontPtrcolonObjectType__aRlNW02x3t1nWe9bTYP3kng*, tyProc_BoF4LjRpO6kzulElGXVNAw) (NCSTRING file, int ptsize);
typedef N_CDECL_PTR(tyObject_Surface_sOGmuBWrSv9c4mZ0oaW1R1w*, tyProc_ckAAycwSnuOQpxSmjYgIRg) (tyObject_FontPtrcolonObjectType__aRlNW02x3t1nWe9bTYP3kng* font, NCSTRING text, tyTuple_Xo4YhcsfLAmbGDNu1Obfcw fg);
struct tyObject_FontPtrcolonObjectType__aRlNW02x3t1nWe9bTYP3kng {
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
struct tyTuple_Xo4YhcsfLAmbGDNu1Obfcw {
NU8 Field0;
NU8 Field1;
NU8 Field2;
NU8 Field3;
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
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static void* TM_EQwrjV2241EE8oljHS2ejQ_2;
tyProc_N8sad65Ws1y1PTmoH30cgg Dl_174611_;
tyProc_BoF4LjRpO6kzulElGXVNAw Dl_174613_;
tyProc_ckAAycwSnuOQpxSmjYgIRg Dl_174789_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_EQwrjV2241EE8oljHS2ejQ_4, "libSDL2_ttf.dylib", 17);
STRING_LITERAL(TM_EQwrjV2241EE8oljHS2ejQ_5, "libSDL2_ttf.dylib", 17);

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
NIM_EXTERNC N_NOINLINE(void, sdl2_ttfInit000)(void) {
	nimfr_("ttf", "ttf.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, sdl2_ttfDatInit000)(void) {
if (!((TM_EQwrjV2241EE8oljHS2ejQ_2 = nimLoadLibrary((NimStringDesc*) &TM_EQwrjV2241EE8oljHS2ejQ_4))
)) nimLoadLibraryError((NimStringDesc*) &TM_EQwrjV2241EE8oljHS2ejQ_5);
	Dl_174611_ = (tyProc_N8sad65Ws1y1PTmoH30cgg) nimGetProcAddr(TM_EQwrjV2241EE8oljHS2ejQ_2, "TTF_Init");
	Dl_174613_ = (tyProc_BoF4LjRpO6kzulElGXVNAw) nimGetProcAddr(TM_EQwrjV2241EE8oljHS2ejQ_2, "TTF_OpenFont");
	Dl_174789_ = (tyProc_ckAAycwSnuOQpxSmjYgIRg) nimGetProcAddr(TM_EQwrjV2241EE8oljHS2ejQ_2, "TTF_RenderUTF8_Blended");
}

