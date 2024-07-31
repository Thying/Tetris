#include "Field.h"

using namespace std;

void Field::Line::input() {
    cout << '|';
    for (int i = 0; i < SIZE; i++)
        if (cell >> i & 1)
            cout << "[]";
        else
            cout << "  ";
    cout << '|' << endl;
}

void Field::cover() {
    cout << ' ';
    for (int i = 0; i < SIZE * 2; i++)
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
/*
void Field::move() {
    int num = _getch();
    if (('0' < num) && (num < '9'))
        point = 1 << (num - '1');
    else if ((num == 'a' || num == 'A' || num == 'ô' || num == 'Ô') && (point.cell != 1))
        point.cell /= 2;
    else if ((num == 'd' || num == 'D' || num == 'â' || num == 'Â') && (point.cell != 128))
        point.cell *= 2;
    else if (num == 's' || num == 'S' || num == 'û' || num == 'Û')
        for (int i = 0; i <= HEIGHT; i++)
            if ((point.cell & line[i].cell) || i == HEIGHT)
                if (i == 0)
                    break;
                else {
                    line[i - 1].cell += point.cell;
                    break;
                }


    drawing();
}
*/