// Snake.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <windows.h>
#include "SnakeHead.h"
#include "Vector2.h"

using namespace std;

bool keys[4] = {false, false, false, false};

const int BOARD_WITCH = 40;
const int BOARD_HEIGHT = 15;
const int FRAME_RATE_IN_MS = 50;


const Vector2 SNAKE_START_POSITION = Vector2((int)BOARD_WITCH/2, (int)BOARD_HEIGHT/2);

void writeBoard(SnakeHead snake);

int main()
{
    bool isGameOver = false;
    SnakeHead snake(SNAKE_START_POSITION);
    int i = 0;
    while (isGameOver == false) {
        keys[0] = (GetAsyncKeyState('A') & 0x8000);
        keys[1] = (GetAsyncKeyState('D') & 0x8000);
        keys[2] = (GetAsyncKeyState('W') & 0x8000);
        keys[3] = (GetAsyncKeyState('S') & 0x8000);
        if (keys[0] == true)
            snake.changeDirection(Vector2::LEFT);
        if (keys[1] == true)
            snake.changeDirection(Vector2::RIGHT);
        if (keys[2] == true)
            snake.changeDirection(Vector2::UP);
        if (keys[3] == true)
            snake.changeDirection(Vector2::DOWN); 

        if (i == 2) {
            system("cls");
            snake.walk();
            writeBoard(snake);
            i = 0;
        }
        else {
            i++;
        }

        Sleep(FRAME_RATE_IN_MS);
    }
}

void writeBoard(SnakeHead snake) {
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
    Vector2 snakePosition = snake.getPosition();
    int stringSnakePosition = ((snakePosition.Y - 1) * (BOARD_WITCH + 1)) + snakePosition.X;
    board[stringSnakePosition] = 'O';

    cout << board << endl;
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
