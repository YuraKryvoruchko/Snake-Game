#include "GameObject.h"

void GameObject::changePosition(Vector2 newPosition) {
	_position = newPosition;
}
Vector2 GameObject::getPosition() {
	return _position;
}