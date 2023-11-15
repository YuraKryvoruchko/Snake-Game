#include "GameObject.h"

Vector2 GameObject::s_boardSize = Vector2(15, 15);
const int GameObject::OFFSET = 2;
const int GameObject::OFFSET_FOR_LOWER_LINE = 1;

void GameObject::changePosition(Vector2 newPosition) {
	if (newPosition.X < 1)
		newPosition.X += s_boardSize.X - OFFSET;
	else if (newPosition.X > s_boardSize.X - OFFSET)
		newPosition.X -= s_boardSize.X - OFFSET;

	if (newPosition.Y < 2)
		newPosition.Y += s_boardSize.X - OFFSET;
	else if (newPosition.Y > s_boardSize.Y - OFFSET_FOR_LOWER_LINE)
		newPosition.Y -= s_boardSize.X - OFFSET;

	_position = newPosition;
}
Vector2 GameObject::getPosition() {
	return _position;
}
void GameObject::setBoardSize(Vector2 boardSize) {
	s_boardSize = boardSize;
}