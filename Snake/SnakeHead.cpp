#include "SnakeHead.h"
#include <iostream>

SnakeHead::SnakeHead(Vector2 startPosition) {
	_position = startPosition;
}

void SnakeHead::changeDirection(Vector2 direction) {
	_direction = direction;
}
void SnakeHead::walk() {
	_position.X += _direction.X;
	_position.Y += _direction.Y;
}
void SnakeHead::eat() {
	throw "void eat(Vector2 direction) is not implemented in SnakeHead.cpp";
}
Vector2 SnakeHead::getPosition() {
	return _position;
}
Vector2 SnakeHead::getDirection() {
	return _direction;
}
