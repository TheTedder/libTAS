/*
    Copyright 2015-2016 Clément Gallet <clement.gallet@ens-lyon.org>

    This file is part of libTAS.

    libTAS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libTAS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libTAS.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef LIBTAS_ENABLE_HUD

#ifndef LIBTAS_RENDERHUD_GL_H_INCL
#define LIBTAS_RENDERHUD_GL_H_INCL

#include "RenderHUD.h"
#include <GL/gl.h>

namespace libtas {
class RenderHUD_GL : public RenderHUD
{
    public:
        RenderHUD_GL();
        ~RenderHUD_GL();
        void box(int& x, int& y, int& width, int& height);
        void renderText(const char* text, Color fg_color, Color bg_color, int x, int y);
    private:
        static GLuint texture;
};
}

#endif
#endif
