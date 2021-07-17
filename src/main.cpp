#include "SDL2/SDL.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	SDL_Window *window;
	SDL_Init(SDL_INIT_VIDEO);

	// Create an application window with the following settings:
	window = SDL_CreateWindow(
		"Billy's Window",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		640,
		480,
		SDL_WINDOW_OPENGL
	);

	// Check that the window was successfully created
	if(window == NULL)
	{
		// In the case that the window could not be made...
		printf("Could not create window: %s\n", SDL_GetError());

		return 1;
	}

	// A basic main loop to prevent blocking
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

	// Close and destroy the window
	SDL_DestroyWindow(window);

	// Clean up
	SDL_Quit();

	return 0;
}
