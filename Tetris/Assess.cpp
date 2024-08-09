// Доступ к массиву

#include "Field.h"

// Проверка что находится
bool Field::check(int x, int y) {
    return fiald[y][x] > 0;
}

// Положить в массив
void Field::input(int x, int y) {
    if (!check(x, y))
        fiald[y][x] = 1;
}

// Убрать из массива
void Field::output(int x, int y) {
    if (check(x, y))
        fiald[y][x] = 0;
}