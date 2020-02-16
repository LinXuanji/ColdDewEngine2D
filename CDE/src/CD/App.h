#pragma once
#include "Core.h"

namespace cde {

	class CD_API App
	{
	public:
		App();
		virtual ~App();

		void Start();
	};

	App* CreateApp();

}


