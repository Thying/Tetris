#include "Header.h"

#include <iostream>
#include <chrono>
#include <thread>



void main() {
    Field field;
    Figure figure;

    auto lastKeyPressTime = std::chrono::steady_clock::now();

    while (true) {
        // Создаем новую фигуру
        figure.recreate();

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
                // Проверяем, прошло ли более секунды с последнего нажатия клавиши
                if (std::chrono::duration_cast<std::chrono::seconds>(std::chrono::steady_clock::now() - lastKeyPressTime).count() >= 1) {
                    lastKeyPressTime = std::chrono::steady_clock::now(); // Обновляем время последнего нажатия
                    if (fall(field, figure)) break; // Вызываем f(), если прошло более секунды без нажатий
                }
                // Ждем 10 миллисекунд
                std::this_thread::sleep_for(std::chrono::milliseconds(10));
            }
        }
        // Удаления полных строк
        field.scored();
    }
}