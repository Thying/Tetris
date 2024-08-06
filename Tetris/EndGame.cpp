#include "Header.h"

void EndGame(int point, bool Lang) {
	system("cls");

	if (Lang) {
		cout << "Конец игры." << endl;
		cout << "Ваши очки: " << point << endl;
	} else {
		cout << "Game over." << endl;
		cout << "Your point: " << point << endl;
	}
}