#include <iostream>
using namespace std;

class C1 {
    //�������
    int width1;
    int width2;
    int height;
    string a;
public:
    //������
    C1(int w1, int w2, string a1) { // Ÿ�� // �簢��
        width1 = w1;
        width2 = w2;
        a = a1;
    }
    C1(int w1, int w2, int h, string a1) { // ��ٸ���
        width1 = w1;
        width2 = w2;
        height = h;
        a = a1;
    }

    //����Լ�
    // ���̸� ��ȯ �Լ�
    int getA(); // width1 
    int getB(); // width2
    int getC(); // height

    //���̸� ���ϴ� �Լ�
    int AreaOval();
    int AreaLadder();
    int AreaRect();

    //��������� �������ִ� ��
    void setTwo(int a, int b); //width1, width2 ����
    void setThree(int a, int b, int c); // width1, width2, height ����

    //�Ҹ���
    ~C1();
};

C1::~C1() {
    cout << "�Ҹ���" << a << "Ŭ����" << endl;
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
    //��ü1 ������ Ÿ��
    C1 Oval(2, 3, "CircleA");
    Oval.setTwo(6, 5);
    //jimin1.AreaOval();
    cout << "Ÿ����� ���̴�" << Oval.AreaOval() << "�̴�" << endl;
    Oval.getB();
    //��ü2 ��ٸ���
    C1 Ladder(2, 3, 4, "Ladder");
    Ladder.setThree(3, 4, 5);
    cout << "��ٸ����� ���̴�" << Ladder.AreaLadder() << "�̴�" << endl;
    Ladder.setThree(3, 4, 3);
    cout << "��ٸ����� ���̴�" << Ladder.AreaLadder() << "�̴�" << endl;

    //��ü3 �簢��
    C1 Rect(3, 4, "Rectabgular");
    Rect.setTwo(3, 4);
    cout << "�簢���� ���̴�" << Rect.AreaRect() << "�̴�" << endl;
}