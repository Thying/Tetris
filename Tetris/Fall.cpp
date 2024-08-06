#include "Header.h"

bool fall(Field& field, Figure& figure) {
    figure.fall(); // Опускаем фигуру вниз
    if (figure.check(field)) { // Проверяем, не столкнулась ли фигура с препятствиями
        figure.up(); // Если столкнулась, возвращаем на место
        for (int i = 0; i < 4; i++) { // Заполняем ячейки поля блоками фигуры
            field.input(figure.blocks[i].x, figure.blocks[i].y);
        }
        return true;
    }
    // Отрисовка игрового поля
    drawing(field, figure);
    return false;
}