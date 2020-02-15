#pragma once

#ifdef CD_PLATFORM_WINDOWS

extern cde::Game* cde::CreateGame();

int main(int argc, char** argv) {
	auto app = cde::CreateGame();
	app->Start();
	delete app;
}

#endif // CD_PLATFORM_WINDOWS

