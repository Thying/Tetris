// Удаления полных строк

#include "Field.h"
#include <cmath>

int Field::scoredCheck() {
    int indicator = 0;

    for (int i = 0; i < HEIGHT; i++)
        if (line[i].cell == pow(2, WIDE) - 1) {
            line[i].cell = 0;
            indicator++;
        }

    return indicator;
}

void Field::scored() {
    int indicator = scoredCheck();

    for (int j = 0; j < indicator; j++)
        for (int i = HEIGHT; i > 0; i--)
            if ((line[i].cell == 0) && (line[i - 1].cell != 0)) {
                line[i].cell = line[i - 1].cell;
                line[i - 1].cell = 0;
            }
}