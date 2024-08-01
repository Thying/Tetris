#pragma once
#include "Field.h"
#include <iostream>
#include "Figure.h"

using namespace std;

// Отрисовка игрового поля
void drawing(Field field, Figure figure);

// Обработки клавиш
bool keys(Field& field, Figure& figure);
