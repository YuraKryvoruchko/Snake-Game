#ifndef SNAKE_HEAD_H
#define SNAKE_HEAD_H

#include <vector>
#include "SnakeBody.h"
#include "Vector2.h"
#include "Fruit.h"

class SnakeHead
{
public:
	SnakeHead(Vector2 startPosition);
	void changeDirection(Vector2 direction);
	void walk();
	void eat(Fruit* fruit);
	Vector2 getPosition();
	Vector2 getDirection();
	std::vector<SnakeBody> getBodyElements();
private:
	Vector2 _position;
	Vector2 _direction;
	std::vector<SnakeBody> _bodyElements;
};

#endif