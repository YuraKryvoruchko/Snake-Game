#ifndef SNAKE_BODY_H
#define SNAKE_BODY_H

#include "Vector2.h"

class SnakeBody
{
public:
	SnakeBody(Vector2 startPosition);
	void changePosition(Vector2 newPosition);
	Vector2 getPosition();
private:
	Vector2 _position;
};

#endif