#pragma once
#include "Field.h"
#include <iostream>
#include "Figure.h"
#include <conio.h>
#include <time.h>

#define WIDE 8
#define HEIGHT 16

using namespace std;

// Отрисовка игрового поля
void drawing(Field field, Figure figure);

// Кнопки
bool keys(Field& field, Figure& figure);
