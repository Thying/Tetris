#include "Header.h"

void main() {
	Field field;
	field.drawing();

	while (true) {
		// ������� ������
		Figure figure;

		// ��������� �������� ����
		drawing(field, figure);

		// ������� ����
		while (true) {
			// ��������� ������
			if (keys(field, figure)) break;
			// ��������� �������� ����
			drawing(field, figure);
		}
		// �������� ������ �����
		field.scored();
	}
}