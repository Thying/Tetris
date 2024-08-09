// Удаления полных строк

#include "Field.h"
#include <cmath>


int Field::scoredCheck() {
    int indicator = 0;

    for (int i = 0; i < HEIGHT; i++)
        for (int j = 0; j < WIDE; j++)
            if (!check(j, i))
                break;
            else if (j == WIDE - 1) {
                for (int u = 0; u < WIDE; u++)
                    output(u, i);
                indicator++;
            }

    return indicator;
}

bool know1(int mas[]) {
    for (int j = 0; j < WIDE; j++)
        if (mas[j] > 0)
            break;
        else if (j == WIDE - 1)
            return true;
    return false;
}

void Field::scored() {
    int indicator = scoredCheck();

    for (int m = 0; m < indicator; m++)
        for (int i = HEIGHT - 1; i > 0; i--)
             if (know1(fiald[i]) && !know1(fiald[i - 1])) {
                    for (int u = 0; u < WIDE; u++) {
                        fiald[i][u] = fiald[i - 1][u];
                        fiald[i - 1][u] = 0;
                    }
                }

    if (indicator) {
        point += indicator * 2 - 1;
    }
} 