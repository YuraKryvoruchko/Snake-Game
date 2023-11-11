#ifndef SNAKE_BODY_H
#define SNAKE_BODY_H

#include "Vector2.h"
#include "GameObject.h"

class SnakeBody : public GameObject
{
public:
	SnakeBody(Vector2 startPosition);
	void changePosition(Vector2 newPosition);
};

#endif