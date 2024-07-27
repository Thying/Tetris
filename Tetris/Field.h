#pragma once

#include <iostream>
#include <conio.h>
#include <time.h>

#define SIZE 8
#define HEIGHT 10

class Field {
public:
    struct Line {
        unsigned cell : SIZE;

        Line(){}
        Line(int num) {
            cell = num % (1 << SIZE);
        }
        void input();
    };

    void cover();
    void drawing();
    void scored();
    void move();

    Field() {
        srand(time(0));
        for (int i = 0; i < HEIGHT; i++)
            line[i] = rand();
    }

    Line point = 1;
    Line line[HEIGHT];
};


