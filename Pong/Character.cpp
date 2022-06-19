/* includes */
#include "Character.h"

/**
 * Character constructor
 */
Character::Character(float posX, float posY, float width, float height, int speed, Color color)
{
	this->posX = posX;
	this->posY = posY;
	this->width = width;
	this->height = height;
	this->speed = speed;
	this->color = color;
}

/* Accessors */
float Character::getPosX()
{
	return this->posX;
}

float Character::setPosX(float posX)
{
	this->posX = posX;
	return this->posX;
}

float Character::getPosY()
{
	return this->posY;
}

float Character::setPosY(float posY)
{
	this->posY = posY;
	return this->posY;
}

float Character::getWidth()
{
	return this->width;
}

float Character::setWidth(float width)
{
	this->width = width;
	return this->width;
}

float Character::getHeight()
{
	return this->height;
}

float Character::setHeight(float height)
{
	this->height = height;
	return this->height;
}

int Character::getSpeed()
{
	return this->speed;
}

int Character::setSpeed(int speed)
{
	this->speed = speed;
	return this->speed;
}

Color Character::getColor()
{
	return this->color;
}

Color Character::setColor(Color color)
{
	this->color = color;
	return this->color;
}

RectangleShape Character::createCharacter()
{
	RectangleShape character;
	character.setPosition(this->getPosX(), this->getPosY());
	character.setSize(Vector2f(this->getWidth(), this->getHeight()));
	character.setFillColor(this->getColor());

	return character;
}