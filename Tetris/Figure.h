#pragma once
#include <iostream>
#include <conio.h>
#include <time.h>
#include "Field.h"

// Структура для представления блока фигуры
struct Block {
	unsigned x;
	unsigned y;
};

// Класс, представляющий фигуру в игре
class Figure {
public:
	// Массив блоков, составляющих фигуру
	Block blocks[4];

	// Конструктор фигуры
	void recreate();

	// Методы поворота фигуры
	// (Turn):
	void turnR();	// Поворот направо
	void turnL();	// Поворот налево

	// Методы перемещения фигуры
	// (Move):
	void moveR();	// Перемещение вправо
	void moveL();	// Перемещение влево
	void fall();	// Падение вниз
	void up();		// Перемещение вверх

	// Методы для проверки и размещения фигуры
	// (Other):
	bool check(Field& field);			// Проверка, находится ли фигура в допустимой области
	void block(int mas, int X, int Y);	// Размещение информации о блоке в массиве
};
