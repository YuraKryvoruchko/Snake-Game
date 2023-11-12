#include "Fruit.h"

Fruit::Fruit(Vector2 position, int bonus) {
	changePosition(position);
	_bonus = bonus;
}

int Fruit::getBonus() {
	return _bonus;
}
char Fruit::getTexture() {
	return TEXTURE;
}