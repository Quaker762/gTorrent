#pragma once

#include <core/Core.hpp>
#include <Version.hpp>

class Application
{
private:
	static shared_ptr<Application> m_app;

	// Private Member Functions & Variables
	shared_ptr<gt::Core> m_core;

public:
	static shared_ptr<Application> getSingleton();

	// Getters
	shared_ptr<gt::Core> &getCore();

	// Public Member Functions & Variables
	int run(int argc, char **argv);
};

