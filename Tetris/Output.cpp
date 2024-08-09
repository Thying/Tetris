// Прорисовка

#include "Field.h"

using namespace std;

// Прорисовка Линии
void Field::output() {
    for (int i = 0; i < HEIGHT; i++) {
        cout << '|';

        for (int j = 0; j < WIDE; j++)
            if (check(j, i))
                cout << "[]";
            else
                cout << "  ";

        cout << '|' << endl;

    }
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

    if(Lang)
        cout << "Очки: " << point << endl;
    else
        cout << "Point: " << point << endl;

    cover();
    output();
    cover();
}