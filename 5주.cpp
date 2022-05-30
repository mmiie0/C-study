#include <iostream>
using namespace std;

class Member {//로그인 구현 코드
	int N;
	string Name;
	string ID;
	string PW;

public:
	//리턴함수
	string getName();
	string getID();
	string getPassword();

	//입력 받는 함수
	void setName(string name);
	void setID(string Id);
	void setPassword(string pw);
};


class Cart {//메인 구현
	int number;
	char classname[20];
	char classNum[20];
	Cart mybag[3];

public:
	void bag_course(int classnum);
	void put_bag();
	void print();
	

	string getName();//이름 값 리턴
	string getID();//ID 값 리턴
};


string Member::getName() { //name 값 리턴
	return Name;
}
string Member::getID() { //ID 값 리턴
	return ID;
}
string Member::getPassword() { //ID 값 리턴
	return PW;
}


	//입력받는 함수
void Member:: setName(string name) {
		cout << "이름: " << endl;
		cin >> name;
		Name = name;
	}
void Member:: setID(string Id) {
		cout << "아이디: " << endl;
		cin >> Id;
		ID = Id;
	}
void Member:: setPassword(string pw) {
		cout << "비밀번호: " << endl;
		cin >> pw;
		PW = pw;
	}


//2번 강의 담기 기능 함수
void Cart::bag_course(int classnum) {
	cout << "추가할 학수 번호>>";
	cin >> classnum;
	classNum[20] = classnum;

	    //번호 일치하면 담기
	if (classNum == "0001") {
		mybag[0].number = 1;
		mybag[0].classname = "c++프로그래밍";
		mybag[0].classNum = "0001";
	}
	if (classNum == "0002") {
		mybag[1].number = 2;
		mybag[1].classname = "리눅스 프로그래밍";
		mybag[1].classNum = "0002";
	}
	if (classNum == "0003") {
		mybag[2].number = 3;
		mybag[2].classname = "리버싱";
		mybag[2].classNum = "0003";
	}
		//이미 저장
	int i = 0;
	for (i=0;i<3;i++)
	if (mybag[i].number==1|| mybag[i].number == 2|| mybag[i].number == 3){
		cout << "이미 my장바구니에 있습니다.";
		switch (mainscreen()); 
	}

	else //잘못 입력-> 메인화면 다시 출력
	{
		switch (mainscreen());
	}
}


//3번 수강 신청 확인 기능 함수
void Cart::put_bag() {
		//my 장바구니 출력
	int* p;
	
	int i = 0;
	for (i = 0; i < 3; i++)
		cout << p->mybag[i].number << p->mybag[i].classname << p->mybag[i].classnum;
}

void Cart::print() { //1번 장바구니 담기 기능 함수로 강의 목록을 배열로 받아서 출력
	cout << "==========강의목록==========";
	int i = 0;
	mybag[0].number = 1;
	mybag[0].classname = "c++프로그래밍";
	mybag[0].classnum = "0001";
	mybag[1].number = 2;
	mybag[1].classname = "리눅스 프로그래밍";
	mybag[1].classnum = "0002";
	mybag[2].number = 3;
	mybag[2].classname = "리버싱";
	mybag[2].classnum = "0003";
}


int main() {
	while (1) {
		int num;
		cout << "----------------서울여자대학교 종합정보시스템----------------\n1.회원가입\n2.로그인\n\n번호를 입력하세요>>";
		cout << "번호를 입력하세요>>";
		cin >> num;

		if (num == 1) {//회원가입
			string setName();
			string setID();
			string setPassword();
			cout << "===회원가입 성공===";
		}
		if (num == 2) {//로그인
			string setID();
			string setPassword();
			string setName();
			string getPassword();
			string getId();
			string getName();
			if (setID() == getId() && setPassword() == getPassword()) {
				cout << getName() << "님 환영합니다.";
				break;
			}
			else {
				cout << "아이디 혹은 비밀번호가 틀렸습니다.";
			}
		}
		else {
			cout << "1 또는 2만 입력해주세요";
		}
	}
}

	//메인화면
int mainscreen() {
	int n;
	cout << "1.장바구니\\n2.강의 담기\n3.수강 신청 확인\n4.로그아웃";
	cout << "번호를 입력하세요>>";
	cin >> n;

	if (n == 1) {
		void print();
	}
	if (n == 2) {
		int bag_course();
	}
	if (n == 3) {
		int put_bag();
	}
	if (n == 4) {
		cout << "------------로그아웃----------\n로그아웃되었습니다. 안녕히가세요.";
	}


}

