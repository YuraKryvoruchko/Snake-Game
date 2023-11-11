#include "Fruit.h"

Fruit::Fruit(Vector2 position, int bonus, char scin) {
	changePosition(position);
	_bonus = bonus;
	_texture = scin;
}

int Fruit::getBonus() {
	return _bonus;
}
char Fruit::getTexture() {
	return _texture;
}