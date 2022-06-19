#pragma once

/* includes */
#include <iostream>
#include <SFML/Graphics.hpp>

/* namespaces */
using namespace std;
using namespace sf;

/**
 *class Character
 */
class Character
{
private:
	float posX, posY;
	float width, height;
	int speed;
	Color color;

public:
	Character(float posX, float posY, float width, float height, int speed, Color color);
	float getPosX();
	float setPosX(float posX);
	float getPosY();
	float setPosY(float posY);
	float getWidth();
	float setWidth(float width);
	float getHeight();
	float setHeight(float height);
	int getSpeed();
	int setSpeed(int speed);
	Color getColor();
	Color setColor(Color color);
	RectangleShape createCharacter();
};

