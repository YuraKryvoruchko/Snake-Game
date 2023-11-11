#include "SnakeHead.h"
#include <iostream>

SnakeHead::SnakeHead(Vector2 startPosition) {
	changePosition(startPosition);
}

void SnakeHead::changeDirection(Vector2 direction) {
	_direction = direction;
}
void SnakeHead::walk() {
	Vector2 currentPosition = getPosition();

	changePosition(currentPosition + _direction);

	for (int i = 0; i < _bodyElements.size(); i++) {
		Vector2 secondPosition = _bodyElements[i].getPosition();
		_bodyElements[i].changePosition(currentPosition);
		currentPosition = secondPosition;
	}
}
void SnakeHead::eat(Fruit fruit) {
	Vector2 snakePosition = getPosition();
	_bodyElements.insert(_bodyElements.begin(), SnakeBody(snakePosition - _direction));
}
Vector2 SnakeHead::getDirection() {
	return _direction;
}
std::vector<SnakeBody> SnakeHead::getBodyElements() {
	return _bodyElements;
}
