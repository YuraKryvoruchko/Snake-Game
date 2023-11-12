#include "Vector2.h"

const Vector2 Vector2::UP = Vector2(0, 1);
const Vector2 Vector2::DOWN = Vector2(0, -1);
const Vector2 Vector2::RIGHT = Vector2(1, 0);
const Vector2 Vector2::LEFT = Vector2(-1, 0);
const Vector2 Vector2::ZERO = Vector2(0, 0);
const Vector2 Vector2::ONE = Vector2(1, 1);

Vector2::Vector2() {
	X = 0;
	Y = 0;
}
Vector2::Vector2(int x, int y) {
	X = x;
	Y = y;
}

bool operator ==(Vector2 a, Vector2 b) {
	if (a.X == b.X && a.Y == b.Y)
		return true;
	return false;
}
bool operator !=(Vector2 a, Vector2 b) {
	if (a.X == b.X && a.Y == b.Y)
		return false;
	return true;
}
Vector2 operator +(Vector2 a, Vector2 b) {
	return Vector2(a.X + b.X, a.Y + b.Y);;
}
Vector2 operator -(Vector2 a, Vector2 b) {
	return Vector2(a.X - b.X, a.Y - b.Y);
}
Vector2 operator *(Vector2 a, int n) {
	return Vector2(a.X * n, a.Y * n);
}
Vector2 operator *(int n, Vector2 a) {
	return Vector2(a.X * n, a.Y * n);
}
Vector2 operator /(Vector2 a, int n) {
	return Vector2(a.X / n, a.Y / n);
}
Vector2 operator /(int n, Vector2 a) {
	return Vector2(a.X / n, a.Y / n);
}