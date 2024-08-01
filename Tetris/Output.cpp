// ����������

#include "Field.h"

using namespace std;

// ���������� �����
void Field::Line::output() {
    cout << '|';
    for (int i = 0; i < WIDE; i++)
        if (cell >> i & 1)
            cout << "[]";
        else
            cout << "  ";
    cout << '|' << endl;
}

// ���������� ������
void Field::cover() {
    cout << ' ';
    for (int i = 0; i < WIDE * 2; i++)
        cout << '_';
    cout << ' ' << endl;
}

// ���������� ��� ����
void Field::drawing() {
    system("cls");
    cover();
    for (int i = 0; i < HEIGHT; i++)
        line[i].output();
    cover();
}