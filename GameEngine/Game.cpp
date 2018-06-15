#include "Game.h"
#include "Utilities/Time/Clock.h"


void Game::run()
{
	engine.startUp();

	while (engine.getModule<WindowModule>().getWin().isOpen())
	{
		SimulationClock::update();
		engine.update();
	}

	engine.shutdown();
}