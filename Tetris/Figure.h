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

// (Figure):
	Figure();

// Повороты		
// (Turn):
	void turnR();	// Направо 
	void turnL();	// Налево

// Перемешения	
// (Move):
	void moveR();	// Направо
	void moveL();	// Налево
	void fall();	// Вниз	
	void up();		// Верх

// Другие функции
// (Other):

	// Проверка находятся на разрешоной територии
	bool check(Field field);

	// Размешение в блоки информации
	void block(int mas, int X, int Y);
};

