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

	friend Vector2 operator +(Vector2 a, Vector2 b);
	friend Vector2 operator -(Vector2 a, Vector2 b);
	friend Vector2 operator *(Vector2 a, int n);
	friend Vector2 operator *(int n, Vector2 a);
	friend Vector2 operator /(Vector2 a, int n);
	friend Vector2 operator /(int n, Vector2 a);
};

#endif