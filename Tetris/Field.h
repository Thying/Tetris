#pragma once

#include <iostream>
#include <conio.h>
#include <time.h>

// ������� ����
#define WIDE 8
#define HEIGHT 16

class Field {
public:
    // ��������� ��� ������������� ����� ����
    struct Line {
        unsigned cell : WIDE; // ������� ����� ��� �������� ��������� ����� �����

        Line() {}
        Line(int num) {
            cell = num % (1 << WIDE); // ������������� ����� ������
        }

        // ����������� ����� �� �����
        void output();
    };

    // ������ ��� ���������� �����
    // (Output):
    void cover();       // ��������� ���� ��������
    void drawing();     // ������������ ��� ����

    void scored();     // ������� ��������� �����
    int scoredCheck();

    // ������ ������� � �������
    // (Assess):
    bool check(int x, int y);   // ��������� ��������� ������ �� �����������
    void input(int x, int y);   // ��������� ������� � ������ �� �����������
    void output(int x, int y);  // ������� ������� �� ������� �� �����������

    Field(); // ����������� ������

    // ����� �����
    bool RusOrEng();

    // ������ �����, �������������� ����
    Line line[HEIGHT];
    unsigned point = 0;
    bool Lang;
};