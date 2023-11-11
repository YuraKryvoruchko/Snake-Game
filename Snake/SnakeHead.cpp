#include "SnakeHead.h"
#include <iostream>

SnakeHead::SnakeHead(Vector2 startPosition) {
	_position = startPosition;
}

void SnakeHead::changeDirection(Vector2 direction) {
	_direction = direction;
}
void SnakeHead::walk() {
	Vector2 currentPosition = _position;
	for (int i = 0; i < _bodyElements.size(); i++) {
		Vector2 secondPosition = _bodyElements[i].getPosition();
		_bodyElements[i].changePosition(currentPosition);
		currentPosition = secondPosition;
	}

	_position.X += _direction.X;
	_position.Y += _direction.Y;
}
void SnakeHead::eat(Fruit* fruit) {
	int snakeBodyXPosition = _position.X - _direction.X;
	int snakeBodyYPosition = _position.Y - _direction.Y;
	
	_bodyElements.insert(_bodyElements.begin(), 
		SnakeBody(Vector2(snakeBodyXPosition, snakeBodyYPosition)));
}
Vector2 SnakeHead::getPosition() {
	return _position;
}
Vector2 SnakeHead::getDirection() {
	return _direction;
}
std::vector<SnakeBody> SnakeHead::getBodyElements() {
	return _bodyElements;
}
