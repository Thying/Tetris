// ������ � �������

#include "Field.h"

// �������� ��� ���������
bool Field::check(int x, int y) {
    return line[y].cell & (1 << x);
}

// �������� � ������
void Field::input(int x, int y) {
    if (!check(x, y))
        line[y].cell += 1 << x;
}

// ������ �� �������
void Field::output(int x, int y) {
    if (check(x, y))
        line[y].cell -= 1 << x;
}