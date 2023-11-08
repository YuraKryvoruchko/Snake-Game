#include "Vector2.h"

const Vector2 Vector2::UP = Vector2(0, 1);
const Vector2 Vector2::DOWN = Vector2(0, -1);
const Vector2 Vector2::RIGHT = Vector2(1, 0);
const Vector2 Vector2::LEFT = Vector2(-1, 0);

Vector2::Vector2() {
	X = 0;
	Y = 0;
}
Vector2::Vector2(int x, int y) {
	X = x;
	Y = y;
}