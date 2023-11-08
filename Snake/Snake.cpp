// Snake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const int WITCH = 40;
const int HEIGHT = 15;

void writeBoard(string* boardBuffer);

int main()
{
    string buffer;
    writeBoard(&buffer);
}

void writeBoard(string* boardBuffer) {
    for (int i = 0; i < HEIGHT; i++) {
        if (i == 0 || i == HEIGHT - 1) {
            for (int j = 0; j < WITCH; j++)
                *boardBuffer += "#";
        }
        else {
            for (int j = 0; j < WITCH; j++) {
                if (j == 0 || j == WITCH - 1)
                    *boardBuffer += "#";
                else
                    *boardBuffer += " ";
            }
        }

        *boardBuffer += "\n";
    }

    cout << *boardBuffer << endl;
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
