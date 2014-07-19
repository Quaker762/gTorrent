#pragma once

#include "GtkMainWindow.hpp"
#include <gtkmm/settings.h>
#include <gtkmm/main.h>
#include <memory>

class GuiGtk
{
private:
	GtkMainWindow *mainWindow;
public:
	GuiGtk(int argc, char **argv);
	~GuiGtk();
};