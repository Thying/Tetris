// �����������	

#include "Figure.h"

// �������
void Figure::moveR() {
	for (int i = 0; i < 4; i++)
		blocks[i].x++;
}

// ������
void Figure::moveL() {
	for (int i = 0; i < 4; i++)
		blocks[i].x--;
}

// ����
void Figure::fall() {
	for (int i = 0; i < 4; i++)
		blocks[i].y++;
}

// ����
void Figure::up() {
	for (int i = 0; i < 4; i++)
		blocks[i].y--;
}