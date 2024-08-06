// Прорисовка

#include "Field.h"

using namespace std;

// Прорисовка Линии
void Field::Line::output() {
    cout << '|';
    for (int i = 0; i < WIDE; i++)
        if (cell >> i & 1)
            cout << "[]";
        else
            cout << "  ";
    cout << '|' << endl;
}

// Прорисовка Крышки
void Field::cover() {
    cout << ' ';
    for (int i = 0; i < WIDE * 2; i++)
        cout << '#';
    cout << ' ' << endl;
}

// Прорисовка Все поле
void Field::drawing() {
    system("cls");

    cout << "Point: " << point << endl;

    cover();
    for (int i = 0; i < HEIGHT; i++)
        line[i].output();
    cover();
}