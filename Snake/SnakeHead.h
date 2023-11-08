#ifndef SNAKE_HEAD_H
#define SNAKE_HEAD_H

#include <vector>
#include "SnakeBody.h"
#include "Vector2.h"

class SnakeHead
{
public:
	SnakeHead(Vector2 startPosition);
	void changeDirection(Vector2 direction);
	void walk();
	void eat();
	Vector2 getPosition();
	Vector2 getDirection();
private:
	Vector2 _position;
	Vector2 _direction;
	std::vector<SnakeBody> _bodyElements;
};

#endif