#include "Field.h"

using namespace std;

void Field::Line::input() {
    cout << '|';
    for (int i = 0; i < WIDE; i++)
        if (cell >> i & 1)
            cout << "[]";
        else
            cout << "  ";
    cout << '|' << endl;
}

void Field::cover() {
    cout << ' ';
    for (int i = 0; i < WIDE * 2; i++)
        cout << '_';
    cout << ' ' << endl;
}

void Field::drawing() {
    system("cls");
    cover();
    for (int i = 0; i < HEIGHT; i++)
        line[i].input();
    cover();
}

void Field::scored() {
   
    for (int i = 0; i < HEIGHT; i++)
        if (line[i].cell == 255)
            line[i].cell = 0;

    for (int j = 0; j < 4; j++)
        for (int i = HEIGHT; i > 0; i--)
            if ((line[i].cell == 0) && (line[i - 1].cell != 0)) {
                line[i].cell = line[i - 1].cell;
                line[i - 1].cell = 0;
            }

    drawing();
}