#include "Field.h"

Field::Field() {
    for (int i = 0; i < HEIGHT; i++)
        for (int j = 0; j < WIDE; j++)
            fiald[i][j] = 0;
    Lang = RusOrEng();
}