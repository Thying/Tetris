// Доступ к массиву

#include "Field.h"

// Проверка что находится
bool Field::check(int x, int y) {
    return line[y].cell & (1 << x);
}

// Положить в массив
void Field::input(int x, int y) {
    if (!check(x, y))
        line[y].cell += 1 << x;
}

// Убрать из массива
void Field::output(int x, int y) {
    if (check(x, y))
        line[y].cell -= 1 << x;
}