#include "Header.h"

#include <iostream>
#include <chrono>
#include <thread>

// ... ваши определения Field и Figure ...

void main() {
    Field field;
    Figure figure;

    system("cls");
    Instructions(field.Lang);

    auto lastKeyPressTime = std::chrono::steady_clock::now();

    while (true) {
        // Создаем новую фигуру
        figure.recreate();
        if (figure.check(field)) break;

        // Отрисовка игрового поля
        drawing(field, figure);

        while (true) {
            // Проверяем, была ли нажата клавиша
            if (_kbhit()) {
                // Обработки клавиш
                if (keys(field, figure)) break;
                // Отрисовка игрового поля
                drawing(field, figure);
            }
            else {
                // Проверяем, прошло ли время для падения
                if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - lastKeyPressTime).count() >= (1000 - field.point)) {
                    lastKeyPressTime = std::chrono::steady_clock::now(); // Обновляем время последнего нажатия
                    if (fall(field, figure)) break; // Вызываем f(), если фигура упала
                }
                // Ждем 10 миллисекунд
                std::this_thread::sleep_for(std::chrono::milliseconds(10));
            }
        }
        // Удаления полных строк
        field.scored();
    }

    EndGame(field.point, field.Lang);
}
