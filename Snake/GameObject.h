#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include "Vector2.h"

class GameObject
{
public:
	Vector2 getPosition();
	static void setBoardSize(Vector2 boardSize);
protected:
	void changePosition(Vector2 newPosition);
private:
	Vector2 _position;
	static Vector2 s_boardSize;
	static const int OFFSET;
	static const int OFFSET_FOR_LOWER_LINE;
};

#endif