#ifndef VECTOR_2_H
#define VECTOR_2_H

struct Vector2
{
	int X;
	int Y;

	static const Vector2 UP;
	static const Vector2 DOWN;
	static const Vector2 RIGHT;
	static const Vector2 LEFT;

	Vector2();
	Vector2(int x, int y);
};

#endif