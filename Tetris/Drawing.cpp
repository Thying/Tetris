// ќтрисовка игрового пол€

#include "Field.h"
#include "Figure.h"

void drawing(Field field, Figure figure) {
	Figure shodew = figure;
	shodew.tipy = -1;

    while (true) { // ÷икл до тех пор, пока фигура не достигнет дна
        shodew.fall();
        if (shodew.check(field)) {
            shodew.up(); // ¬ернуть на место, если столкнулась
            for (int i = 0; i < 4; i++) {
                field.input(shodew.blocks[i].x, shodew.blocks[i].y, shodew.tipy);
            }
            break; // ¬ыходим из цикла, когда фигура опустилась до конца
        }
    }

	for (int i = 0; i < 4; i++)
		field.input(figure.blocks[i].x, figure.blocks[i].y, figure.tipy);

	field.drawing();

    for (int i = 0; i < 4; i++) {
        field.output(figure.blocks[i].x, figure.blocks[i].y);
        field.output(shodew.blocks[i].x, shodew.blocks[i].y);
    }
}