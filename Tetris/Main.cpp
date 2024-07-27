#include "Field.h"



void main() {
	Field field;

	field.drawing();

	while (true) {
		field.scored();
		field.move();
	}
}