#include "Header.h"

void Instructions(bool Lang) {
	setlocale(LC_ALL, "Russian");
	if (Lang) {
		cout << "������� � ������!" << endl;
		cout << endl;
		cout << "����������:" << endl;
		cout << endl;
		cout << "� W ��� ������� �����: �����" << endl;
		cout << "� A ��� ������� �����: ����������� ������ �����" << endl;
		cout << "� D ��� ������� ������: ����������� ������ ������" << endl;
		cout << "� S ��� ������� ����: ��������� ������ ����" << endl;
		cout << "� ������: ������� ������� ������" << endl;
		cout << "� Q: ������� ������ �����" << endl;
		cout << "� E: ������� ������ ������" << endl;
		cout << endl;
		cout << "���� ����: " << endl;
		cout << "�������� ����� �� ������, ����� ��� ��������, � ������������� ���������� ����� ����." << endl;
		cout << endl;
		cout << "�������������� ��������:" << endl;
		cout << endl;
		cout << "� ����� ����, ��� ������ ��������� �� �����, ��� ������������� �� ����." << endl;
		cout << "� ���� ����� ���������� �������, ��� ��������." << endl;
		cout << "� ���� ������������ �� ��� ���, ���� �� ���������� ��� ����." << endl;
		cout << endl;
		cout << "�����!" << endl;
		cout << endl;
		cout << "������� ����� ������� ��� ���� ���� ������ ������." << endl;
	} else {
		cout << "Play Tetris!" << endl;
		cout << endl;
		cout << "Controls:" << endl;
		cout << endl;
		cout << "� W or Up Arrow: Pause" << endl;
		cout << "� A or Left Arrow: Move figure left" << endl;
		cout << "� D or Right Arrow: Move figure right" << endl;
		cout << "� S or Down Arrow: Move figure down" << endl;
		cout << "� Spacebar: Fast drop figure" << endl;
		cout << "� Q: Rotate figure left" << endl;
		cout << "� E: Rotate figure right" << endl;
		cout << endl;
		cout << "Game Objective: " << endl;
		cout << "Complete lines by filling them with blocks to make them disappear and prevent the field from filling up completely." << endl;
		cout << endl;
		cout << "Additional information:" << endl;
		cout << endl;
		cout << "� Once a figure reaches the bottom, it will be fixed on the field." << endl;
		cout << "� If a line is filled with blocks, it will disappear." << endl;
		cout << "� The game continues until the whole field is filled." << endl;
		cout << endl;
		cout << "Good luck!" << endl;
		cout << endl;
		cout << "Press any key to start playing." << endl;
	}
	_getch();
}