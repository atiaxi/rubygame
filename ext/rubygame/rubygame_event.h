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


#ifndef _RUBYGAME_EVENT_H
#define _RUBYGAME_EVENT_H

extern void Rubygame_Init_Event();
extern VALUE cEvent;
extern VALUE cActiveEvent;
extern VALUE cKeyDownEvent;
extern VALUE cKeyUpEvent;
extern VALUE cMouseMotionEvent;
extern VALUE cMouseDownEvent;
extern VALUE cMouseUpEvent;
extern VALUE cJoyAxisEvent;
extern VALUE cJoyBallEvent;
extern VALUE cJoyHatEvent;
extern VALUE cJoyDownEvent;
extern VALUE cJoyUpEvent;
extern VALUE cQuitEvent;
extern VALUE cSysWMEvent;
extern VALUE cResizeEvent;
extern VALUE cExposeEvent;
extern VALUE convert_active(Uint8);
extern VALUE convert_keymod(SDLMod);
extern VALUE convert_mousebuttons(Uint8);
extern VALUE rbgm_convert_sdlevent(SDL_Event);
extern VALUE rbgm_fetchevents(VALUE);

#endif
