#include <iostream>
using namespace std;

#include "Class.h"


int main(void) {
    //°´Ã¼1 Å¸¿ø
    C1 Oval(2, 3, "CircleA");
    Oval.setTwo(6, 5);
    Oval.AreaOval();

    //°´Ã¼2 »ç´Ù¸®²Ã
    C1 Ladder(2, 3, 4, "Ladder");
    Ladder.setThree(3, 4, 5);
    Ladder.AreaLadder();
    Ladder.setThree(3, 4, 3);
    Ladder.AreaLadder();

    //°´Ã¼3 »ç°¢Çü
    C1 Rect(3, 4, "Rectangular");
    Rect.setTwo(3, 4);
    Rect.AreaRect();
}