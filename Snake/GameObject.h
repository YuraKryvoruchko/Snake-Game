#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include "Vector2.h"
class GameObject
{
public:
	Vector2 getPosition();
protected:
	void changePosition(Vector2 newPosition);
private:
	Vector2 _position;
};

#endif