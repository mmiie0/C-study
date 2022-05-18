#include <iostream>
using namespace std;

class C1 {
    //멤버변수
    int width1;
    int width2;
    int height;
    string a;
public:
    //생성자
    C1(int w1, int w2, string a1) { // 타원 // 사각형
        width1 = w1;
        width2 = w2;
        a = a1;
    }
    C1(int w1, int w2, int h, string a1) { // 사다리꼴
        width1 = w1;
        width2 = w2;
        height = h;
        a = a1;
    }

    //멤버함수
    // 길이를 반환 함수
    int getA(); // width1 
    int getB(); // width2
    int getC(); // height

    //넓이를 구하는 함수
    int AreaOval();
    int AreaLadder();
    int AreaRect();

    //멤버변수를 수정해주는 값
    void setTwo(int a, int b); //width1, width2 설정
    void setThree(int a, int b, int c); // width1, width2, height 설정

    //소멸자
    ~C1();
};

C1::~C1() {
    cout << "소멸자" << a << "클래스" << endl;
}
int C1::AreaOval() {
    int Oval = width1 * width2 * 3.14;
    return Oval;
}

int C1::AreaLadder() {
    int Ladder = (width1 + width2) * height / 2;
    return Ladder;
}
int C1::AreaRect() {
    int Rect = width1 * width2;
    return Rect;
}

void C1::setTwo(int a, int b) {
    width1 = a;
    width2 = b;
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


void C1::setThree(int a, int b, int c) {
    width1 = a;
    width2 = b;
    height = c;
}
int main(void)
{
    //객체1 만들지 타원
    C1 Oval(2, 3, "CircleA");
    Oval.setTwo(6, 5);
    //jimin1.AreaOval();
    cout << "타원곡선의 넓이는" << Oval.AreaOval() << "이다" << endl;
    Oval.getB();
    //객체2 사다리꼴
    C1 Ladder(2, 3, 4, "Ladder");
    Ladder.setThree(3, 4, 5);
    cout << "사다리꼴의 넓이는" << Ladder.AreaLadder() << "이다" << endl;
    Ladder.setThree(3, 4, 3);
    cout << "사다리꼴의 넓이는" << Ladder.AreaLadder() << "이다" << endl;

    //객체3 사각형
    C1 Rect(3, 4, "Rectabgular");
    Rect.setTwo(3, 4);
    cout << "사각형의 넓이는" << Rect.AreaRect() << "이다" << endl;
}