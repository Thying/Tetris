#include "Header.h"

void EndGame(int point, bool Lang) {
	system("cls");

	if (Lang) {
		cout << "����� ����." << endl;
		cout << "���� ����: " << point << endl;
	} else {
		cout << "Game over." << endl;
		cout << "Your point: " << point << endl;
	}
}