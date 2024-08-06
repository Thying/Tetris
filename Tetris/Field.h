#pragma once

#include <iostream>
#include <conio.h>
#include <time.h>

// Размеры поля
#define WIDE 8
#define HEIGHT 16

class Field {
public:
    // Структура для представления линии поля
    struct Line {
        unsigned cell : WIDE; // Битовая маска для хранения состояния ячеек линии

        Line() {}
        Line(int num) {
            cell = num % (1 << WIDE); // Инициализация линии числом
        }

        // Отображение линии на экран
        void output();
    };

    // Методы для управления полем
    // (Output):
    void cover();       // Закрывает поле крышками
    void drawing();     // Отрисовывает все поле

    void scored();     // Удаляет собранные линии
    int scoredCheck();

    // Методы доступа к массиву
    // (Assess):
    bool check(int x, int y);   // Проверяет состояние ячейки по координатам
    void input(int x, int y);   // Вставляет элемент в массив по координатам
    void output(int x, int y);  // Удаляет элемент из массива по координатам

    Field(); // Конструктор класса

    // Выбор языка
    bool RusOrEng();

    // Массив линий, представляющий поле
    Line line[HEIGHT];
    unsigned point = 0;
    bool Lang;
};