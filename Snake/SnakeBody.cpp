#include "SnakeBody.h"

SnakeBody::SnakeBody(Vector2 startPosition) {
	_position = startPosition;
}

void SnakeBody::changePosition(Vector2 newPosition) {
	_position = newPosition;
}
Vector2 SnakeBody::getPosition() {
	return _position;
}