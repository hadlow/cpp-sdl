#ifndef Game_h
#define Game_h

#include <iostream>

#include "SDL2/SDL.h"

class Game
{
	public:
		Game(const char* title, int x_position, int y_position, int width, int height, bool fullscreen);

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
};

#endif
