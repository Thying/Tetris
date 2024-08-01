#include "Header.h"

void main() {
	Field field;
	field.drawing();

	while (true) {
		// Создаем фигуру
		Figure figure;

		// Отрисовка игрового поля
		drawing(field, figure);

		// Игровой цикл
		while (true) {
			// Обработки клавиш
			if (keys(field, figure)) break;
			// Отрисовка игрового поля
			drawing(field, figure);
		}
		// Удаления полных строк
		field.scored();
	}
}