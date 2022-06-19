#pragma once

/* includes */
#include "Character.h"

class Enemy : public Character
{
private:

public:
	Enemy(float posX, float posY, float width, float height, int speed, Color color);
};

