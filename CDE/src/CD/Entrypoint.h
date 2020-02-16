#pragma once

#ifdef CD_PLATFORM_WINDOWS

extern cde::App* cde::CreateApp();

int main(int argc, char** argv) {

	cde::Log::Init();
	CD_CORE_WARN("Initialized Log!");
	int a = 5;
	CD_INFO("welcome to CDE, sir, what can I do for you.");
	CD_INFO("the Var = {}", a);

	auto app = cde::CreateApp();
	app->Start();
	delete app;
}

#endif // CD_PLATFORM_WINDOWS

