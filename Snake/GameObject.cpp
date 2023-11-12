#include "GameObject.h"

void GameObject::changePosition(Vector2 newPosition) {
	if (newPosition.X < 1)
		newPosition.X += 23;
	else if (newPosition.X > 23)
		newPosition.X -= 23;

	if (newPosition.Y < 2)
		newPosition.Y += 24;
	else if (newPosition.Y > 24)
		newPosition.Y -= 24;

	_position = newPosition;
}
Vector2 GameObject::getPosition() {
	return _position;
}