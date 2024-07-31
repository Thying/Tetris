#pragma once
#include <iostream>
#include <conio.h>
#include <time.h>
#include "Field.h"


struct Block{
	unsigned x;
	unsigned y;
};

class Figure {
public:
	Block blocks[4];

	Figure() {
		srand(time(0));
		switch (rand()%7)
		{
		case 0:
			// [][][][]
			block(0, 0, 0);
			block(1, 1, 0);
			block(2, 2, 0);
			block(3, 3, 0);
			break;
		case 1:
			// [][]
			//   [][]
			block(0, 0, 0);
			block(1, 1, 0);
			block(2, 1, 1);
			block(3, 2, 1);			
			break;
		case 2:
			//   [][]
			// [][]
			block(0, 0, 1);
			block(1, 1, 1);
			block(2, 1, 0);
			block(3, 2, 0);
			break;
		case 3:
			// [][][]
			//     []
			block(0, 0, 0);
			block(1, 1, 0);
			block(2, 2, 0);
			block(3, 2, 1);
			break;
		case 4:
			//     []
			// [][][]
			block(0, 0, 1);
			block(1, 1, 1);
			block(2, 2, 1);
			block(3, 2, 0);
			break;
		case 5:
			// [][]
			// [][]
			block(0, 0, 0);
			block(1, 1, 0);
			block(2, 0, 1);
			block(3, 1, 1);
			break;
		case 6:
			// [][][]
			//   []
			block(0, 0, 0);
			block(1, 1, 0);
			block(2, 2, 0);
			block(3, 1, 1);
			break;
		default:
			break;
		}
	}

	bool check(Field field) {
		for (int i = 0; i < 4; i++) {
			if (blocks[i].x < 0 || blocks[i].x > SIZE - 1)
				return true;
			if (blocks[i].y < 0 || blocks[i].y > HEIGHT - 1)
				return true;
			if (field.check(blocks[i].x, blocks[i].y))
				return true;
		}
		return false;
	}

	void turnL() {
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

	void turnR() {
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

	void moveR() {
		for (int i = 0; i < 4; i++)
			blocks[i].x++;
	}

	void moveL() {
		for (int i = 0; i < 4; i++)
			blocks[i].x--;
	}

	void fall() {
		for (int i = 0; i < 4; i++) 
			blocks[i].y++;
	}

	void up() {
		for (int i = 0; i < 4; i++)
			blocks[i].y--;
	}

	void block(int mas, int X, int Y) {
		blocks[mas].x = X;
		blocks[mas].y = Y;
	}
};

