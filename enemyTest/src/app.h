#pragma once
#include "lib/framework.hpp"

enum Window 
{
	WIDTH = 512,
	HEIGHT = 512
};

class App
{
public:

	static AppEnv& Get()
	{
		static AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);
		return env;
	}
};