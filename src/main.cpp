#include "Game.h"

const int WINDOW_WIDTH = 1366;
const int WINDOW_HEIGHT = 768;

Game *game = nullptr;

int main(int argc, char* argv[])
{
	game = new Game("Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, false);

	while(game->running())
	{
		game->handle_events();
		game->update();
		game->render();
	}

	game->clean();

	return 0;
}
