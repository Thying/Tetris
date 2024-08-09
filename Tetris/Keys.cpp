#include "Header.h"

// ��������� ������
bool keys(Field& field, Figure& figure) {
    switch (_getch()) {
        // �����
    case 'w':
    case 72:
        system("cls");
        if (field.Lang) {
            cout << "�����" << endl;
        }
        else {
            cout << "Pause" << endl;
        }
        cout << endl;

        Instructions(field.Lang);

        break;
        // ����
    case 'a':
    case 75:
        figure.moveL(); // ���������� ������ �����
        if (figure.check(field)) { // ���������, �� ����������� �� ������ � �������������
            figure.moveR(); // ���� �����������, ���������� �� �����
        }
        break;

        // �����
    case 'd':
    case 77:
        figure.moveR();
        if (figure.check(field)) {
            figure.moveL();
        }
        break;

        // ����
    case 's':
    case 80:
        figure.fall(); // �������� ������ ����
        if (figure.check(field)) { // ���������, �� ����������� �� ������ � �������������
            figure.up(); // ���� �����������, ���������� �� �����
            for (int i = 0; i < 4; i++) { // ��������� ������ ���� ������� ������
                field.input(figure.blocks[i].x, figure.blocks[i].y, figure.tipy);
            }
            return true; // ���������� true, ���� ������ ���������� �� �����
        }
        break;

        // ������ - ������� �������
    case ' ':
        while (true) { // ���� �� ��� ���, ���� ������ �� ��������� ���
            figure.fall();
            if (figure.check(field)) {
                figure.up(); // ������� �� �����, ���� �����������
                for (int i = 0; i < 4; i++) {
                    field.input(figure.blocks[i].x, figure.blocks[i].y, figure.tipy);
                }
                break; // ������� �� �����, ����� ������ ���������� �� �����
            }
        }
        return true; // ���������� true, ���� ������ ���������� �� �����
        break;

        // ������� �����
    case 'q':
        figure.turnL();
        if (figure.check(field)) { // ���������, �� ����������� �� ������ � �������������
            figure.turnR(); // ���� �����������, ���������� �� �����
        }
        break;

        // ������� ������
    case 'e':
        figure.turnR();
        if (figure.check(field)) {
            figure.turnL();
        }
        break;
    default:
        break;
    }

    return false;
}