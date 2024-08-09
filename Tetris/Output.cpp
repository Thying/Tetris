// ����������

#include "Field.h"

using namespace std;

// ���������� �����
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

// ���������� ������
void Field::cover() {
    cout << ' ';
    for (int i = 0; i < WIDE * 2; i++)
        cout << '#';
    cout << ' ' << endl;
}

// ���������� ��� ����
void Field::drawing() {
    system("cls");

    if(Lang)
        cout << "����: " << point << endl;
    else
        cout << "Point: " << point << endl;

    cover();
    output();
    cover();
}