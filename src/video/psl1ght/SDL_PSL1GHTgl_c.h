/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2024 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#ifndef SDL_PSL1GHTgl_c_h_
#define SDL_PSL1GHTgl_c_h_

#include "SDL_config.h"
#if defined(SDL_VIDEO_DRIVER_PSL1GHT) && defined(SDL_VIDEO_OPENGL)
#include <EGL/egl.h>
#define GL3_PROTOTYPES
#include <GL3/gl3.h>
#include <GL3/rsxgl.h>
#include <GL3/rsxgl3ext.h>

#include "SDL_PSL1GHTvideo.h"
#include "SDL_video.h"

typedef struct SDL_GLDriverData
{
    EGLDisplay display;
    EGLContext context;
    EGLSurface surface;
    uint32_t swapinterval;
} SDL_GLDriverData;

extern void *PSL1GHT_GL_GetProcAddress(_THIS, const char *proc);
extern int PSL1GHT_GL_MakeCurrent(_THIS, SDL_Window *window, SDL_GLContext context);
extern void PSL1GHT_GL_SwapBuffers(_THIS);

extern int PSL1GHT_GL_SwapWindow(_THIS, SDL_Window *window);
extern SDL_GLContext PSL1GHT_GL_CreateContext(_THIS, SDL_Window *window);

extern int PSL1GHT_GL_LoadLibrary(_THIS, const char *path);
extern void PSL1GHT_GL_UnloadLibrary(_THIS);
extern int PSL1GHT_GL_SetSwapInterval(_THIS, int interval);
extern int PSL1GHT_GL_GetSwapInterval(_THIS);

#endif

#endif /* SDL_PSL1GHTgl_c_h_ */

/* vi: set ts=4 sw=4 expandtab: */
