#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


int main() 
{
    int i, j = 0; //j번째 특정 배수까지 입력받을 것
    int mul;  //특정 배수

    srand((unsigned int) time(NULL));
    
    int RN = (rand()%100+1); //1부터 시작(1~100)하는 랜덤한 수

    cout << "랜덤한 수: " << RN << endl;
    cout << "특정배수 개수: ";
    cin >> j; //특정 배수 개수를 입력받음

    for (int k = 0; k < j; k++) //
    {
        cout <<"\n" << k << "번째 특정배수: ";
        cin >> mul; //특정 배수를 입력받음

        cout << "<특정배수만 출력하는 프로그램>\n";
        for (i = 1; i <= RN; i++)
        {
            if (i%mul==0)
            {
                cout << i << ", "; //i의 특정 배수 출력
            } 
        }

        cout << "<특정배수 제외 출력하는 프로그램>\n";
        for (i = 1; i <= RN; i++) {
            if (i%mul==0) {
                continue; //입력받은 특정 배수 제외하고
            }
            cout << i << ", "; //나머지 출력
        }
    }
}