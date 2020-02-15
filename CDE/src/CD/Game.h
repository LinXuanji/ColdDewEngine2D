#pragma once
#include "Core.h"

namespace cde {

	class CD_API Game
	{
	public:
		Game();
		virtual ~Game();

		void Start();
	};

	Game* CreateGame();

}


