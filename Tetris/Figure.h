#pragma once
#include <iostream>
#include <conio.h>
#include <time.h>
#include "Field.h"

// ��������� ��� ������������� ����� ������
struct Block {
	unsigned x;
	unsigned y;
};

// �����, �������������� ������ � ����
class Figure {
public:
	// ������ ������, ������������ ������
	Block blocks[4];

	// ����������� ������
	void recreate();

	// ������ �������� ������
	// (Turn):
	void turnR();	// ������� �������
	void turnL();	// ������� ������

	// ������ ����������� ������
	// (Move):
	void moveR();	// ����������� ������
	void moveL();	// ����������� �����
	void fall();	// ������� ����
	void up();		// ����������� �����

	// ������ ��� �������� � ���������� ������
	// (Other):
	bool check(Field& field);			// ��������, ��������� �� ������ � ���������� �������
	void block(int mas, int X, int Y);	// ���������� ���������� � ����� � �������
};
