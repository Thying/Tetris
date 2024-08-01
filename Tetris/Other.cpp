// Другие функции

#include "Figure.h"

// Проверка находятся на разрешоной територии
bool Figure::check(Field field) {
	for (int i = 0; i < 4; i++) {
		if (blocks[i].x < 0 || blocks[i].x > WIDE - 1)
			return true;
		if (blocks[i].y < 0 || blocks[i].y > HEIGHT - 1)
			return true;
		if (field.check(blocks[i].x, blocks[i].y))
			return true;
	}
	return false;
}

// Размешение в блоки информации
void Figure::block(int mas, int X, int Y) {
	blocks[mas].x = X;
	blocks[mas].y = Y;
}