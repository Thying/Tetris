// Перемешения	

#include "Figure.h"

// Направо
void Figure::moveR() {
	for (int i = 0; i < 4; i++)
		blocks[i].x++;
}

// Налево
void Figure::moveL() {
	for (int i = 0; i < 4; i++)
		blocks[i].x--;
}

// Вниз
void Figure::fall() {
	for (int i = 0; i < 4; i++)
		blocks[i].y++;
}

// Верх
void Figure::up() {
	for (int i = 0; i < 4; i++)
		blocks[i].y--;
}