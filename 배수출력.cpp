#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


int main() 
{
    int i, j = 0; //j��° Ư�� ������� �Է¹��� ��
    int mul;  //Ư�� ���

    srand((unsigned int) time(NULL));
    
    int RN = (rand()%100+1); //1���� ����(1~100)�ϴ� ������ ��

    cout << "������ ��: " << RN << endl;
    cout << "Ư����� ����: ";
    cin >> j; //Ư�� ��� ������ �Է¹���

    for (int k = 0; k < j; k++) //
    {
        cout <<"\n" << k << "��° Ư�����: ";
        cin >> mul; //Ư�� ����� �Է¹���

        cout << "<Ư������� ����ϴ� ���α׷�>\n";
        for (i = 1; i <= RN; i++)
        {
            if (i%mul==0)
            {
                cout << i << ", "; //i�� Ư�� ��� ���
            } 
        }

        cout << "<Ư����� ���� ����ϴ� ���α׷�>\n";
        for (i = 1; i <= RN; i++) {
            if (i%mul==0) {
                continue; //�Է¹��� Ư�� ��� �����ϰ�
            }
            cout << i << ", "; //������ ���
        }
    }
}