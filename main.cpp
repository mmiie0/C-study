#include <iostream>
using namespace std;

#include "Class.h"


int main(void) {
    //��ü1 Ÿ��
    C1 Oval(2, 3, "CircleA");
    Oval.setTwo(6, 5);
    Oval.AreaOval();

    //��ü2 ��ٸ���
    C1 Ladder(2, 3, 4, "Ladder");
    Ladder.setThree(3, 4, 5);
    Ladder.AreaLadder();
    Ladder.setThree(3, 4, 3);
    Ladder.AreaLadder();

    //��ü3 �簢��
    C1 Rect(3, 4, "Rectangular");
    Rect.setTwo(3, 4);
    Rect.AreaRect();
}