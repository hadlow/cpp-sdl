#ifndef Game_h
#define Game_h

#include <stdio.h>
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

}

#endif
