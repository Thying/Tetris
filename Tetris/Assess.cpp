// ������ � �������

#include "Field.h"

// �������� ��� ���������
bool Field::check(int x, int y) {
    return fiald[y][x] > 0;
}

// �������� � ������
void Field::input(int x, int y, int tipy) {
    if (!check(x, y))
        fiald[y][x] = tipy;
}

// ������ �� �������
void Field::output(int x, int y) {
    if (check(x, y))
        fiald[y][x] = 0;
}