#include "Field.h"
#include <iostream>
#include "Figure.h"


bool keys(Field& field, Figure& figure) {
	switch (_getch()) {

		// <-
	case 'a':
		figure.moveL();
		if (figure.check(field))
			figure.moveR();
		break;

		// ->
	case 'd':
		figure.moveR();
		if (figure.check(field))
			figure.moveL();
		break;

		// \/
	case 's':
		figure.fall();
		if (figure.check(field)) {
			figure.up();
			for (int i = 0; i < 4; i++)
				field.input(figure.blocks[i].x, figure.blocks[i].y);
			return true;
		}
		break;

		// \|/
	case ' ':
		while (true) {
			figure.fall();
			if (figure.check(field)) {
				figure.up();
				for (int i = 0; i < 4; i++)
					field.input(figure.blocks[i].x, figure.blocks[i].y);
				break;
			}
		}
		return true;
		break;

		// -^
	case 'q':
		figure.turnL();
		if (figure.check(field))
			figure.turnR();
		break;

		// ^-
	case 'e':
		figure.turnR();
		if (figure.check(field))
			figure.turnL();
		break;
	default:
		break;
	}

	return false;
}
