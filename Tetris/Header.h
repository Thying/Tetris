#pragma once
#include "Field.h"
#include <iostream>
#include "Figure.h"

using namespace std;

// ��������� �������� ����
void drawing(Field field, Figure figure);

// ��������� ������
bool keys(Field& field, Figure& figure);

// �������
bool fall(Field& field, Figure& figure);

// ����� ����
void EndGame(int point, bool Lang);

// ����������
void Instructions(bool Lang);