#ifndef GRAPHICS_H
#define GRAPHICS_H
#include "SDL.h"
#include "iostream"
#include <string>

class graphics
{
    public:
        graphics();
        ~graphics();
        void setColor(const SDL_Color&);
        SDL_Color getColor();
        void drawRect(const SDL_Rect&);
        void fillRect(const SDL_Rect&);
        void wipe();
        void show();
    private:
        SDL_Window* mainWindow;
        SDL_Renderer* mainRenderer;
        SDL_Color drawColor;

};

#endif // GRAPHICS_H
