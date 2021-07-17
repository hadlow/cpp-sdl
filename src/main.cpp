#include "SDL2/SDL.h"
#include <stdio.h>

const int WINDOW_WIDTH = 1366;
const int WINDOW_HEIGHT = 768;

int main(int argc, char* argv[])
{
	SDL_Window *window;
	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow(
		"Billy's Window",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WINDOW_WIDTH,
		WINDOW_HEIGHT,
		SDL_WINDOW_OPENGL
	);

	if(window == NULL)
	{
		printf("Could not create window: %s\n", SDL_GetError());

		return 1;
	}

	bool is_running = true;
	SDL_Event event;

	while(is_running)
	{
		while(SDL_PollEvent(&event))
		{
			if(event.type == SDL_QUIT)
			{
				is_running = false;
			}
		}

		SDL_Delay(16);
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
