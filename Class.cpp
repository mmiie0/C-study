#include <iostream>
using namespace std;

#include "Class.h"


C1::~C1() {
    cout << "�Ҹ��� " << a << " Ŭ����" << endl;
}
void C1::AreaOval() {
    int Oval = width1 * width2 * 3.14;
    cout << "Ÿ����� ���̴�" << Oval << "�̴�" << endl;
}

int C1::AreaLadder() {
    int Ladder = (width1 + width2) * height / 2;
    cout << "��ٸ����� ���̴�" << Ladder << "�̴�" << endl;
    return Ladder;
}
int C1::AreaRect() {
    int Rect = width1 * width2;
    cout << "�簢���� ���̴�" << Rect << "�̴�" << endl;
    return Rect;
}

void C1::setTwo(int a, int b) {
    width1 = a;
    width2 = b;
}
void C1::setThree(int a, int b, int c) {
    width1 = a;
    width2 = b;
    height = c;
}
int C1::getA() {
    return width1;
}
int C1::getB() {
    return width2;
}
int C1::getC() {
    return height;
}