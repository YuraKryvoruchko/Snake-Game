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

Vector2 operator +(Vector2 a, Vector2 b) {
	Vector2 newVector(a.X + b.X, a.Y + b.Y);
	return newVector;
}
Vector2 operator -(Vector2 a, Vector2 b) {
	Vector2 newVector(a.X - b.X, a.Y - b.Y);
	return newVector;
}