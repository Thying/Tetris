#pragma once

#include <iostream>
#include <conio.h>
#include <time.h>

#define WIDE 8
#define HEIGHT 16

class Field {
public:
    struct Line {
        unsigned cell : WIDE;

        Line(){}
        Line(int num) {
            cell = num % (1 << WIDE);
        }
        void input();
    };

    void cover();
    void drawing();
    void scored();

    bool check(int x, int y) {
        return line[y].cell & (1 << x);
    }

    void input(int x, int y) {
        if (!check(x, y))
            line[y].cell += 1 << x;
    }

    void output(int x, int y) {
        if (check(x, y))
            line[y].cell -= 1 << x;
    }

    Field() {
        for (int i = 0; i < HEIGHT; i++)
            line[i] = 0;
    }

    Line line[HEIGHT];
};


