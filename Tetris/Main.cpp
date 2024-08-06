#include "Header.h"

#include <iostream>
#include <chrono>
#include <thread>



void main() {
    Field field;
    Figure figure;

    auto lastKeyPressTime = std::chrono::steady_clock::now();

    while (true) {
        // ������� ����� ������
        figure.recreate();

        // ��������� �������� ����
        drawing(field, figure);
        while (true) {
            // ���������, ���� �� ������ �������
            if (_kbhit()) {
                // ��������� ������
                if (keys(field, figure)) break;
                // ��������� �������� ����
                drawing(field, figure);
            }
            else {
                // ���������, ������ �� ����� ������� � ���������� ������� �������
                if (std::chrono::duration_cast<std::chrono::seconds>(std::chrono::steady_clock::now() - lastKeyPressTime).count() >= 1) {
                    lastKeyPressTime = std::chrono::steady_clock::now(); // ��������� ����� ���������� �������
                    if (fall(field, figure)) break; // �������� f(), ���� ������ ����� ������� ��� �������
                }
                // ���� 10 �����������
                std::this_thread::sleep_for(std::chrono::milliseconds(10));
            }
        }
        // �������� ������ �����
        field.scored();
    }
}