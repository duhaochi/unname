#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Unamed::Application* Unamed::CreateApplication();

int main(int argc, char** argv) {

	printf("engine running\n");
	auto app = Unamed::CreateApplication();
	app->Run();
	delete app;
}

#endif