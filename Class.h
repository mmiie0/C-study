#ifndef C1_H
#define C1_H

//클래스 선언부
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

    // 길이를 반환하는 함수
    int getA(); // width1 
    int getB(); // width2
    int getC(); // height

    //넓이를 구하는 함수
    void AreaOval();
    int AreaLadder();
    int AreaRect();

    //멤버변수를 수정해주는 함수
    void setTwo(int a, int b); //width1, width2 설정
    void setThree(int a, int b, int c); // width1, width2, height 설정

    //소멸자
    ~C1();
};
#endif C1_H