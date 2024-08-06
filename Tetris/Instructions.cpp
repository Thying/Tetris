#include "Header.h"

void Instructions(bool Lang) {
	setlocale(LC_ALL, "Russian");
	if (Lang) {
		cout << "»грайте в “етрис!" << endl;
		cout << endl;
		cout << "”правление:" << endl;
		cout << endl;
		cout << "Х W или стрелка вверх: ѕауза" << endl;
		cout << "Х A или стрелка влево: ѕеремещение фигуры влево" << endl;
		cout << "Х D или стрелка вправо: ѕеремещение фигуры вправо" << endl;
		cout << "Х S или стрелка вниз: ќпускание фигуры вниз" << endl;
		cout << "Х ѕробел: Ѕыстрое падение фигуры" << endl;
		cout << "Х Q: ѕоворот фигуры влево" << endl;
		cout << "Х E: ѕоворот фигуры вправо" << endl;
		cout << endl;
		cout << "÷ель игры: " << endl;
		cout << "—обирать линии из блоков, чтобы они исчезали, и предотвращать заполнение всего пол€." << endl;
		cout << endl;
		cout << "ƒополнительные сведени€:" << endl;
		cout << endl;
		cout << "Х ѕосле того, как фигура опуститс€ до конца, она зафиксируетс€ на поле." << endl;
		cout << "Х ≈сли лини€ заполнитс€ блоками, она исчезнет." << endl;
		cout << "Х »гра продолжаетс€ до тех пор, пока не заполнитс€ все поле." << endl;
		cout << endl;
		cout << "”дачи!" << endl;
		cout << endl;
		cout << "Ќажмите любую клавишу дл€ того чтоб начать играть." << endl;
	} else {
		cout << "Play Tetris!" << endl;
		cout << endl;
		cout << "Controls:" << endl;
		cout << endl;
		cout << "Х W or Up Arrow: Pause" << endl;
		cout << "Х A or Left Arrow: Move figure left" << endl;
		cout << "Х D or Right Arrow: Move figure right" << endl;
		cout << "Х S or Down Arrow: Move figure down" << endl;
		cout << "Х Spacebar: Fast drop figure" << endl;
		cout << "Х Q: Rotate figure left" << endl;
		cout << "Х E: Rotate figure right" << endl;
		cout << endl;
		cout << "Game Objective: " << endl;
		cout << "Complete lines by filling them with blocks to make them disappear and prevent the field from filling up completely." << endl;
		cout << endl;
		cout << "Additional information:" << endl;
		cout << endl;
		cout << "Х Once a figure reaches the bottom, it will be fixed on the field." << endl;
		cout << "Х If a line is filled with blocks, it will disappear." << endl;
		cout << "Х The game continues until the whole field is filled." << endl;
		cout << endl;
		cout << "Good luck!" << endl;
		cout << endl;
		cout << "Press any key to start playing." << endl;
	}
	_getch();
}