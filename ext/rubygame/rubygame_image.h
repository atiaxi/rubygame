/*
 * Rubygame -- Ruby code and bindings to SDL to facilitate game creation
 * Copyright (C) 2004-2007  John Croisant
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef _RUBYGAME_IMAGE_H
#define _RUBYGAME_IMAGE_H

#include "SDL_image.h"

#ifndef SDL_IMAGE_MAJOR_VERSION
#define SDL_IMAGE_MAJOR_VERSION 0
#endif

#ifndef SDL_IMAGE_MINOR_VERSION
#define SDL_IMAGE_MINOR_VERSION 0
#endif

#ifndef SDL_IMAGE_PATCHLEVEL
#define SDL_IMAGE_PATCHLEVEL 0
#endif

extern void Init_rubygame_image();
extern VALUE rbgm_image_load(VALUE, VALUE);

#endif
