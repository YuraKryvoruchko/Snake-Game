#ifndef FRUIT_H
#define FRUIT_H

#include "Vector2.h"

class Fruit
{
public:
	Fruit(Vector2 position, int bonus, char texture);
	Vector2 getPosition();
	int getBonus();
	char getTexture();
private:
	int _bonus;
	char _texture;
	Vector2 _position;
};

#endif