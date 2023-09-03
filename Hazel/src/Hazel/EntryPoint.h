#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {

	Hazel::Log::Init();
	HZ_CODE_WARNING("Initialized Log");
	HZ_CLIENT_INFO("App initialized");

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#else
#error Hazel only supports Windows
#endif