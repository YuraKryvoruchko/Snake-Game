#include "PlayerInput.h"
#include <windows.h>

bool PlayerInput::_keys[4] = { false, false, false, false };

void PlayerInput::updateInput() {
    _keys[INDEX_OF_A_KEY] = (GetAsyncKeyState('A') & 0x8000);
    _keys[INDEX_OF_D_KEY] = (GetAsyncKeyState('D') & 0x8000);
    _keys[INDEX_OF_W_KEY] = (GetAsyncKeyState('W') & 0x8000);
    _keys[INDEX_OF_S_KEY] = (GetAsyncKeyState('S') & 0x8000);
}
Vector2 PlayerInput::getDirection() {
    if (_keys[INDEX_OF_A_KEY] == true)
        return Vector2::LEFT;
    if (_keys[INDEX_OF_D_KEY] == true)
        return Vector2::RIGHT;
    if (_keys[INDEX_OF_W_KEY] == true)
        return Vector2::DOWN;
    if (_keys[INDEX_OF_S_KEY] == true)
        return Vector2::UP;

    return Vector2::ZERO;
}
bool PlayerInput::isInput() {
    for (int i = 0; i < (sizeof(_keys) / sizeof(bool)); i++) {
        if (_keys[i] == true)
            return true;
    }
    return false;
}
