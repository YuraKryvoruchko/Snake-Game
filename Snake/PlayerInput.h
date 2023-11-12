#ifndef PLAYER_INPUT_H
#define PLAYER_INPUT_H

#include "Vector2.h"

class PlayerInput
{
public:
	static void updateInput();
	static Vector2 getDirection();
	static bool isInput();
private:
	static bool _keys[4];

	static const int INDEX_OF_A_KEY = 0;
	static const int INDEX_OF_D_KEY = 1;
	static const int INDEX_OF_W_KEY = 2;
	static const int INDEX_OF_S_KEY = 3;
};

#endif