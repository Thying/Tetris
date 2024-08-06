#pragma once
#include "Field.h"
#include <iostream>
#include "Figure.h"

using namespace std;

// Отрисовка игрового поля
void drawing(Field field, Figure figure);

// Обработки клавиш
bool keys(Field& field, Figure& figure);

// Подение
bool fall(Field& field, Figure& figure);

// Конец игры
void EndGame(int point, bool Lang);

// Инструкция
void Instructions(bool Lang);