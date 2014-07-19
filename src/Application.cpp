#include "Application.hpp"
#include <core/Log.hpp>

shared_ptr<Application> Application::m_app = nullptr;

shared_ptr<Application> Application::getSingleton()
{
	if (m_app == nullptr)
		m_app = shared_ptr<Application>(new Application());
	return m_app;
}

shared_ptr<gt::Core> &Application::getCore()
{
	return m_core;
}

int Application::run(int argc, char **argv)
{
	gt::Log::Debug("GTorrent v." GTORRENT_VERSION);
	gt::Log::Debug("Starting up core library...");
	m_core = make_shared<gt::Core>();

	while (m_core->isRunning()) {
		m_core->update();	}

	while (m_core->isRunning())
	{
		m_core->update();
	}

	return 0;
}
