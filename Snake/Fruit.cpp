#include "Fruit.h"

Fruit::Fruit(Vector2 position, int bonus, char scin) {
	_position = position;
	_bonus = bonus;
	_texture = scin;
}

Vector2 Fruit::getPosition() {
	return _position;
}
int Fruit::getBonus() {
	return _bonus;
}
char Fruit::getTexture() {
	return _texture;
}