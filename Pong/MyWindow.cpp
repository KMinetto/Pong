#include "MyWindow.h"

/* Global variables */
Event event;

/*
 * MyWindow constructor
 */
MyWindow::MyWindow(int width, int height, string title)
{
	this->width = width;
	this->height = height;
	this->title = title;
}

/* Accessors */
int MyWindow::getWidth()
{
	return this->width;
}

int MyWindow::setWidth(int width)
{
	this->width = width;
	return this->width;
}

int MyWindow::getHeight()
{
	return this->height;
}

int MyWindow::setHeight(int height)
{
	this->height = height;
	return this->height;
}

string MyWindow::getTitle()
{
	return this->title;
}

string MyWindow::setTitle(string title)
{
	this->title = title;
	return this->title;
}

void MyWindow::createWindow()
{
	if (MyWindow::getWidth() < 0 || MyWindow::getHeight())
	{
		cerr << "Impossible de créer une fenêtre avec des valeurs négatives" << endl;
		return;
	}
	RenderWindow window(VideoMode(MyWindow::getWidth(), MyWindow::getHeight()), MyWindow::getTitle());

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear();
		window.display();
	}
}