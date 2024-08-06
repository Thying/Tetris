#include "Header.h"

bool Field::RusOrEng() {
	setlocale(LC_ALL, "Russian");

	cout << "Выбирете язык" << endl;
	cout << "Choose a language" << endl;
	cout << endl;
	cout << "1: Русский" << endl;
	cout << "2: English" << endl;

	if (_getch() == '1')
		return true;
	return false;
}