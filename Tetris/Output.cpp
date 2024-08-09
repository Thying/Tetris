// ����������

#include "Field.h"

using namespace std;

// ���������� �����
void Field::output() {
    for (int i = 0; i < HEIGHT; i++) {
        cout << '|';

        for (int j = 0; j < WIDE; j++)
            switch (fiald[i][j])
            {
            case 1:
                cout << "[]";
                break;
            case -1:
                cout << "##";
                break;
            case 2:
                cout << "{}";
                break;
            case 3:
                cout << "()";
                break;
            case 0:
                cout << "  ";
                break;
            }

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