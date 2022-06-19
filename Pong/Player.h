#pragma once

/* includes */
#include <SFML/Graphics.hpp>
#include "Character.h"

class Player : public Character
{
private:

public:
	Player(float posX, float posY, float width, float height, int speed, Color color);
};

