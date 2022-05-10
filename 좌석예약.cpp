#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int num;
    int a, b = 0;
    int seats[3][10] = { }; //seats를 0으로 설정

    cout << "좌석 예약하시겠습니까?(0이나 1선택)\n";
    cin >> num;
    cout << endl;
    
    if (num == 0) //0 입력 시 종료
    {
        cout << "좌석 예약 종료";
    }

    while (num == 1) //1입력 시 좌석 출력
    {
        for (int k = 0; k <10; k++)
        {
            cout << k << " ";
        }
        cout << "\n------------------------------------\n";


        for (int m = 0; m <3; m++) //행 1~3
        {

            for (int n = 0; n <= 9; n++) //열 1~9
            {
                cout << seats[m][n] << " ";
            }

            cout << "\n"; //각 열이 끝나면 줄바꿈
        }


        cout << "몇 행, 몇 열 좌석을 예약하시겠습니까? \n";
        cin >> a >> b;  //사용자가 행, 열 숫자 두 개 입력


        if (seats[a-1][b-1] == 0) //좌석이 0이면
        {
            cout << "예약되었습니다.\n"; //예약됨
            seats[a-1][b-1] = 1; //사용자 입력좌석을 0->1로 변경
        }


        else //좌석이 1이면
        {
            cout << "이미 예약된 자리입니다.\n"; //예약 안 됨
        }


        cout << "\n좌석 예약하시겠습니까?(0이나 1선택) \n"; //반복
        cin >> num;

        if (num == 0)
            cout << "좌석 예약 종료"; //0이면 종료 + 종료 문구 출력, 1이면 While문 반복
    }
   
}