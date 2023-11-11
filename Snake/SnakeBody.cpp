#include "SnakeBody.h"

SnakeBody::SnakeBody(Vector2 startPosition) {
	changePosition(startPosition);
}

void SnakeBody::changePosition(Vector2 newPosition) {
	GameObject::changePosition(newPosition);
}