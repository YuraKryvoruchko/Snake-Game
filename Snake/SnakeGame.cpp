// SnakeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <windows.h>
#include "SnakeHead.h"
#include "Vector2.h"
#include "Fruit.h"
#include "PlayerInput.h"

using namespace std;

const int BOARD_WITCH = 25;
const int BOARD_HEIGHT = 25;
const int MAX_BONUS = 3;
const int FRAME_RATE_IN_MS = 5;

const Vector2 SNAKE_START_POSITION = Vector2((int)BOARD_WITCH/2, (int)BOARD_HEIGHT/2);

SnakeHead* snake;
Fruit* currentFruit;

void writeBoard();
string getClearBoard();
Fruit* getNewFruit();
int converteVector2ToStringPosition(Vector2 position);

int main()
{
    srand((unsigned)time(NULL));

    bool isGameOver = false;
    snake = new SnakeHead(SNAKE_START_POSITION);
    (*snake).changeDirection(Vector2::RIGHT);
    currentFruit = getNewFruit();

    int i = 0;
    while (isGameOver == false) {
        PlayerInput::updateInput();
        if (PlayerInput::isInput() == true) {
            Vector2 inputDirection = PlayerInput::getDirection();
            (*snake).changeDirection(inputDirection);
        }

        if (i == 2) {
            system("cls");
            (*snake).walk();

            for (auto element : (*snake).getBodyElements()) {
                if ((*snake).getPosition() == element.getPosition()) {
                    isGameOver = true;
                }
            }
            if ((*snake).getPosition() == (*currentFruit).getPosition()) {
                (*snake).eat(*currentFruit);
                delete currentFruit;
                currentFruit = getNewFruit();
            }

            writeBoard();
            i = 0;
        }
        else {
            i++;
        }

        Sleep(FRAME_RATE_IN_MS);
    }

    delete snake;
    delete currentFruit;

    cout << "Game Over" << endl;

    return 0;
}

void writeBoard() {
    string board = getClearBoard();
    int stringSnakePosition = converteVector2ToStringPosition((*snake).getPosition());
    board[stringSnakePosition] = 'O';
    for (auto element : (*snake).getBodyElements()) {
        int stringElementPosition = converteVector2ToStringPosition(element.getPosition());
        board[stringElementPosition] = 'B';
    }
    int stringFruitPosition = converteVector2ToStringPosition((*currentFruit).getPosition());
    board[stringFruitPosition] = (*currentFruit).getTexture();

    cout << board << endl;
}
string getClearBoard() {
    string board;
    for (int i = 0; i < BOARD_HEIGHT; i++) {
        if (i == 0 || i == BOARD_HEIGHT - 1) {
            for (int j = 0; j < BOARD_WITCH; j++)
                board += "#";
        }
        else {
            for (int j = 0; j < BOARD_WITCH; j++) {
                if (j == 0 || j == BOARD_WITCH - 1)
                    board += "#";
                else
                    board += " ";
            }
        }

        board += "\n";
    }

    return board;
}
Fruit* getNewFruit() {
    int xPosition = (rand() % (BOARD_WITCH - 1)) + 1;
    int yPosition = (rand() % (BOARD_HEIGHT - 1)) + 1;
    int bonus = (rand() % MAX_BONUS) + 1;

    return new Fruit(Vector2(xPosition, yPosition), bonus);
}
int converteVector2ToStringPosition(Vector2 position) {
    return ((position.Y - 1) * (BOARD_WITCH + 1)) + position.X;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
