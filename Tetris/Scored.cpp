// Удаления полных строк

#include "Field.h"
#include <cmath>

void Field::scored() {

    for (int i = 0; i < HEIGHT; i++)
        if (line[i].cell == pow(2, WIDE) - 1)
            line[i].cell = 0;

    for (int j = 0; j < 4; j++)
        for (int i = HEIGHT; i > 0; i--)
            if ((line[i].cell == 0) && (line[i - 1].cell != 0)) {
                line[i].cell = line[i - 1].cell;
                line[i - 1].cell = 0;
            }

    drawing();
}