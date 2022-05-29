#include <iostream>
using namespace std;

#include "Class.h"


C1::~C1() {
    cout << "소멸자 " << a << " 클래스" << endl;
}
void C1::AreaOval() {
    int Oval = width1 * width2 * 3.14;
    cout << "타원곡선의 넓이는" << Oval << "이다" << endl;
}

int C1::AreaLadder() {
    int Ladder = (width1 + width2) * height / 2;
    cout << "사다리꼴의 넓이는" << Ladder << "이다" << endl;
    return Ladder;
}
int C1::AreaRect() {
    int Rect = width1 * width2;
    cout << "사각형의 넓이는" << Rect << "이다" << endl;
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