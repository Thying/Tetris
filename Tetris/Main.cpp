#include "Field.h"
#include <iostream>
#include "Figure.h"
#include <thread>

using namespace std;

void drawing(Field field, Figure figure) {
	for (int i = 0; i < 4; i++)
		field.input(figure.blocks[i].x, figure.blocks[i].y);
	field.drawing();
	for (int i = 0; i < 4; i++)
		field.output(figure.blocks[i].x, figure.blocks[i].y);
}

void main() {
	Field field;
	int x, y;
	field.drawing();

	while (true) {
		Figure figure;
		drawing(field, figure);
		while (true) {
			int num = _getch();
			if (num == 'a' || num == 'A' || num == '�' || num == '�') {
				figure.moveL();
				if(figure.check(field))
					figure.moveR();
			}
			else if (num == 'd' || num == 'D' || num == '�' || num == '�') {
				figure.moveR();
				if (figure.check(field))
					figure.moveL();
			}
			else if (num == 's' || num == 'S' || num == '�' || num == '�') {
				figure.fall();
				if (figure.check(field)) {
					figure.up();
					for (int i = 0; i < 4; i++)
						field.input(figure.blocks[i].x, figure.blocks[i].y);
					break;
				}
			}
			else if (num == ' ') {
				while (true) {
					figure.fall();
					if (figure.check(field)) {
						figure.up();
						for (int i = 0; i < 4; i++)
							field.input(figure.blocks[i].x, figure.blocks[i].y);
						break;
					}
				}
				break;
			}
			else if (num == 'q' || num == 'Q' || num == '�' || num == '�') {
				figure.turnL();
				if (figure.check(field))
					figure.turnR();
			}
			else if (num == 'e' || num == 'E' || num == '�' || num == '�') {
				figure.turnR();
				if (figure.check(field))
					figure.turnL();
			}




			drawing(field, figure);
		}
		field.scored();
	}
}