#include "Header.h"

#include <iostream>
#include <chrono>
#include <thread>

// ... ���� ����������� Field � Figure ...

void main() {
    Field field;
    Figure figure;

    auto lastKeyPressTime = std::chrono::steady_clock::now();
    // ��������� �������� �������
    unsigned fallSpeed = 0;

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
                // ���������, ������ �� ����� ��� �������
                if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - lastKeyPressTime).count() >= (1000 - fallSpeed)) {
                    lastKeyPressTime = std::chrono::steady_clock::now(); // ��������� ����� ���������� �������
                    if (fall(field, figure)) break; // �������� f(), ���� ������ �����
                }
                // ���� 10 �����������
                std::this_thread::sleep_for(std::chrono::milliseconds(10));
            }
        }
        // �������� ������ �����
        field.scored();

        // ����������� �������� �������
        fallSpeed++;
    }
}
