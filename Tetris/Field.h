#pragma once

#include <iostream>
#include <conio.h>
#include <time.h>

// ������� ����
#define WIDE 8
#define HEIGHT 16

class Field {
public:
    // ������ ��� ���������� �����
    // (Output):
    void output();  // ������� ������� �� ������� �� �����������
    void cover();       // ��������� ���� ��������
    void drawing();     // ������������ ��� ����

    void scored();     // ������� ��������� �����
    int scoredCheck();

    // ������ ������� � �������
    // (Assess):
    bool check(int x, int y);   // ��������� ��������� ������ �� �����������
    void input(int x, int y, int tipy);   // ��������� ������� � ������ �� �����������
    void output(int x, int y);  // ������� ������� �� ������� �� �����������

    Field(); // ����������� ������

    // ����� �����
    bool RusOrEng();

    // ������ �����, �������������� ����
    int fiald[HEIGHT][WIDE];
    unsigned point = 0;
    bool Lang;
};