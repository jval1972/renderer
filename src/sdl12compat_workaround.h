#pragma once

#include <SDL.h>

[[gnu::always_inline]] static inline Uint32 fast_SDL_MapRGB(const SDL_PixelFormat *const format12, const Uint8 r, const Uint8 g, const Uint8 b) {
    return (r >> format12->Rloss) << format12->Rshift | (g >> format12->Gloss) << format12->Gshift | (b >> format12->Bloss) << format12->Bshift | format12->Amask;
}
