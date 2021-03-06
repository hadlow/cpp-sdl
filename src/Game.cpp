#include "Game.h"

Game::Game(const char* title, int x_position, int y_position, int width, int height, bool fullscreen)
{
	int flags = 0;

	if(fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "Game init" << std::endl;

		window = SDL_CreateWindow(title, x_position, y_position, width, height, flags);

		if(window)
		{
			renderer = SDL_CreateRenderer(window, -1, 0);

			if(renderer)
			{
				is_running = true;
			}
		}
	} else {
		is_running = false;
	}
}

Game::~Game()
{

}

void Game::update()
{

}

void Game::render()
{
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(renderer);

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
	SDL_RenderDrawLine(renderer, 320, 200, 300, 240);
	SDL_RenderDrawLine(renderer, 300, 240, 340, 240);
	SDL_RenderDrawLine(renderer, 340, 240, 320, 200);

	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

void Game::handle_events()
{
	SDL_Event event;

	SDL_PollEvent(&event);

	switch(event.type)
	{
		case SDL_QUIT:
			is_running = false;

		default:
			break;
	}
}

bool Game::running()
{
	return is_running;
}
