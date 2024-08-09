// Отрисовка игрового поля

#include "Field.h"
#include "Figure.h"

void drawing(Field field, Figure figure) {
	for (int i = 0; i < 4; i++)
		field.input(figure.blocks[i].x, figure.blocks[i].y, figure.tipy);
	field.drawing();
	for (int i = 0; i < 4; i++)
		field.output(figure.blocks[i].x, figure.blocks[i].y);
}