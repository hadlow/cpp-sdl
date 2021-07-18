#ifndef Game_h
#define Game_h

#include <iostream>

#include "SDL2/SDL.h"

class Game
{
	public:
		Game();

		~Game();

		void update();

		void render();

		void clean();

		void handle_events();

		bool running();

	private:
		bool is_running;

		SDL_Window *window;

		SDL_Renderer *renderer;
}

#endif
