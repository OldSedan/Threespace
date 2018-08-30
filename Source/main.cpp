#include "iostream"
#include "threespace.h"
#include "graphics.h"

int main( int argc, char* args[] )
{

std::ostream& console = std::cout;

graphics graphics;

const SDL_Color black = {0,0,0,255};
const SDL_Color red = {255,0,0,255};
const SDL_Color green = {0,255,0,255};
const SDL_Color blue = {0,0,255,255};

SDL_Rect rectangle = {200, 200, 150, 100};

graphics.setColor(green);
graphics.wipe();
graphics.setColor(blue);
graphics.fillRect(rectangle);
graphics.show();
SDL_Delay(2000);

}
