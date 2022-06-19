#pragma once

/* includes */
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

/* namespaces */
using namespace std;
using namespace sf;

/**
 * class MyWindow
 */
class MyWindow
{
private:
	int width;
	int height;
	string title;

public:
	MyWindow(int width, int height, string title);
	int getWidth();
	int setWidth(int width);
	int getHeight();
	int setHeight(int height);
	string getTitle();
	string setTitle(string title);
	void createWindow();
};

