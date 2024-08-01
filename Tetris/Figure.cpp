#include "Figure.h"

Figure::Figure() {
	srand(time(0));
	switch (rand() % 7)
	{
	case 0:
		// [][][][]
		block(0, 0, 0);
		block(1, 1, 0);
		block(2, 2, 0);
		block(3, 3, 0);
		break;
	case 1:
		// [][]
		//   [][]
		block(0, 0, 0);
		block(1, 1, 0);
		block(2, 1, 1);
		block(3, 2, 1);
		break;
	case 2:
		//   [][]
		// [][]
		block(0, 0, 1);
		block(1, 1, 1);
		block(2, 1, 0);
		block(3, 2, 0);
		break;
	case 3:
		// [][][]
		//     []
		block(0, 0, 0);
		block(1, 1, 0);
		block(2, 2, 0);
		block(3, 2, 1);
		break;
	case 4:
		//     []
		// [][][]
		block(0, 0, 1);
		block(1, 1, 1);
		block(2, 2, 1);
		block(3, 2, 0);
		break;
	case 5:
		// [][]
		// [][]
		block(0, 0, 0);
		block(1, 1, 0);
		block(2, 0, 1);
		block(3, 1, 1);
		break;
	case 6:
		// [][][]
		//   []
		block(0, 0, 0);
		block(1, 1, 0);
		block(2, 2, 0);
		block(3, 1, 1);
		break;
	default:
		break;
	}
}