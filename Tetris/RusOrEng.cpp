#include "Header.h"

bool Field::RusOrEng() {
	setlocale(LC_ALL, "Russian");

	cout << "�������� ����" << endl;
	cout << "Choose a language" << endl;
	cout << endl;
	cout << "1: �������" << endl;
	cout << "2: English" << endl;

	if (_getch() == '1')
		return true;
	return false;
}