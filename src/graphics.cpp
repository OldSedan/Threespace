#include "graphics.h"

using namespace std;

string windowTitle = "Threespace";


graphics::graphics()
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS | SDL_INIT_TIMER) < 0)
    {
        cout << "SDL_Init failed with error code: " << SDL_GetError() << '/n';
    }
    mainWindow = SDL_CreateWindow(windowTitle.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, NULL);
    mainRenderer = SDL_CreateRenderer(mainWindow, -1, NULL);
}

void graphics::setColor(const SDL_Color &color)
{
    SDL_SetRenderDrawColor(mainRenderer, color.r, color.g, color.b, color.a);
}

SDL_Color graphics::getColor()
{
    return drawColor;
}

void graphics::drawRect(const SDL_Rect& rect)
{
    SDL_RenderDrawRect(mainRenderer, &rect);
}

void graphics::fillRect(const SDL_Rect& rect)
{
    SDL_RenderFillRect(mainRenderer, &rect);
}

void graphics::wipe()
{
    SDL_RenderClear(mainRenderer);
}

void graphics::show()
{
    SDL_RenderPresent(mainRenderer);
}

graphics::~graphics()
{

    cout << "Graphics engine shutdown" << '\n';
    SDL_DestroyRenderer(mainRenderer);
    SDL_DestroyWindow(mainWindow);
    SDL_Quit();

}
