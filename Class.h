#ifndef C1_H
#define C1_H

//Ŭ���� �����
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

    // ���̸� ��ȯ�ϴ� �Լ�
    int getA(); // width1 
    int getB(); // width2
    int getC(); // height

    //���̸� ���ϴ� �Լ�
    void AreaOval();
    int AreaLadder();
    int AreaRect();

    //��������� �������ִ� �Լ�
    void setTwo(int a, int b); //width1, width2 ����
    void setThree(int a, int b, int c); // width1, width2, height ����

    //�Ҹ���
    ~C1();
};
#endif C1_H