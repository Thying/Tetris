#include "Header.h"

// Обработки клавиш
bool keys(Field& field, Figure& figure) {
    switch (_getch()) {
        // Пауза
    case 'w':
    case 72:
        system("cls");
        if (field.Lang) {
            cout << "Пауза" << endl;
        }
        else {
            cout << "Pause" << endl;
        }
        cout << endl;

        Instructions(field.Lang);

        break;
        // Лево
    case 'a':
    case 75:
        figure.moveL(); // Перемещаем фигуру влево
        if (figure.check(field)) { // Проверяем, не столкнулась ли фигура с препятствиями
            figure.moveR(); // Если столкнулась, возвращаем на место
        }
        break;

        // Право
    case 'd':
    case 77:
        figure.moveR();
        if (figure.check(field)) {
            figure.moveL();
        }
        break;

        // Вниз
    case 's':
    case 80:
        figure.fall(); // Опускаем фигуру вниз
        if (figure.check(field)) { // Проверяем, не столкнулась ли фигура с препятствиями
            figure.up(); // Если столкнулась, возвращаем на место
            for (int i = 0; i < 4; i++) { // Заполняем ячейки поля блоками фигуры
                field.input(figure.blocks[i].x, figure.blocks[i].y, figure.tipy);
            }
            return true; // Возвращаем true, если фигура опустилась до конца
        }
        break;

        // Пробел - быстрое падение
    case ' ':
        while (true) { // Цикл до тех пор, пока фигура не достигнет дна
            figure.fall();
            if (figure.check(field)) {
                figure.up(); // Вернуть на место, если столкнулась
                for (int i = 0; i < 4; i++) {
                    field.input(figure.blocks[i].x, figure.blocks[i].y, figure.tipy);
                }
                break; // Выходим из цикла, когда фигура опустилась до конца
            }
        }
        return true; // Возвращаем true, если фигура опустилась до конца
        break;

        // Поворот влево
    case 'q':
        figure.turnL();
        if (figure.check(field)) { // Проверяем, не столкнулась ли фигура с препятствиями
            figure.turnR(); // Если столкнулась, возвращаем на место
        }
        break;

        // Поворот вправо
    case 'e':
        figure.turnR();
        if (figure.check(field)) {
            figure.turnL();
        }
        break;
    default:
        break;
    }

    return false;
}