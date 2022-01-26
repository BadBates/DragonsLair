#pragma once
#include "Application.h"

#ifdef DL_PLATFORM_WINDOWS

extern DragonsLair::Application* DragonsLair::CreateApplication();

int main(int argc, char** argv) {
	auto app = DragonsLair::CreateApplication();
	app->Run();
	delete app;
}

#endif