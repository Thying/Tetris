// Повороты	

#include "Figure.h"

// Направо 
void Figure::turnL() {
	for (int i = 0; i < 4; i++) {
		if (i == 1) i++;

		int Y = blocks[i].y;

		if (blocks[i].x - blocks[1].x > 0)
			blocks[i].y = blocks[1].y + (blocks[i].x - blocks[1].x);
		else
			blocks[i].y = blocks[1].y - (blocks[i].x - blocks[1].x);

		if (Y - blocks[1].y < 0)
			blocks[i].x = blocks[1].x + (Y - blocks[1].y);
		else
			blocks[i].x = blocks[1].x - (Y - blocks[1].y);
	}
}

// Налево
void Figure::turnR() {
	for (int i = 0; i < 4; i++) {
		if (i == 1) i++;

		int Y = blocks[i].y;

		if (blocks[i].x - blocks[1].x < 0)
			blocks[i].y = blocks[1].y + (blocks[i].x - blocks[1].x);
		else
			blocks[i].y = blocks[1].y - (blocks[i].x - blocks[1].x);

		if (Y - blocks[1].y > 0)
			blocks[i].x = blocks[1].x + (Y - blocks[1].y);
		else
			blocks[i].x = blocks[1].x - (Y - blocks[1].y);
	}
}