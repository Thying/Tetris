#include "Field.h"
#include <iostream>
#include "Figure.h"

using namespace std;

void drawing(Field field, Figure figure);

bool keys(Field &field, Figure &figure);



void main() {
	Field field;
	int x, y;
	field.drawing();

	while (true) {
		Figure figure;
		drawing(field, figure);
		while (true) {
			if (keys(field, figure)) break;
			drawing(field, figure);
		}
		field.scored();
	}
}