#ifndef FRUIT_H
#define FRUIT_H

#include "Vector2.h"
#include "GameObject.h"

class Fruit : public GameObject
{
public:
	Fruit(Vector2 position, int bonus);
	int getBonus();
	char getTexture();
private:
	int _bonus;
	char _texture;

	const char TEXTURE = 'F';
};

#endif