#include "MyWindow.h"
#include "Player.h"
#include "Enemy.h"

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

/* Customized Functions */

void MyWindow::createWindow()
{
	Player player(0.f, (MyWindow::getHeight() / 2) - 100.f, 30.f, 200.f, 2, Color::White);
	Enemy enemy(
		MyWindow::getWidth() - 30.f, (MyWindow::getHeight() / 2) - 100.f,
		30.f, 200.f, 2, Color::White
	);

	if (MyWindow::getWidth() < 0 || MyWindow::getHeight() < 0)
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
		window.draw(player.createCharacter());
		window.draw(enemy.createCharacter());
		window.display();
	}
}