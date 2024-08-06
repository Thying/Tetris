#include "Header.h"

bool fall(Field& field, Figure& figure) {
    figure.fall(); // �������� ������ ����
    if (figure.check(field)) { // ���������, �� ����������� �� ������ � �������������
        figure.up(); // ���� �����������, ���������� �� �����
        for (int i = 0; i < 4; i++) { // ��������� ������ ���� ������� ������
            field.input(figure.blocks[i].x, figure.blocks[i].y);
        }
        return true;
    }
    // ��������� �������� ����
    drawing(field, figure);
    return false;
}