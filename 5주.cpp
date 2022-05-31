#include <iostream>
#include <cstring>
using namespace std;

class Member {//로그인 구현 코드
private:
	string Name;
	string ID;
	string PW;

public:
	//리턴 함수
	string getName(string);
	string getID(string);
	string getPassword(string);

	//입력 받는 함수
	void setName(string);
	void setID(string);
	void setPassword(string);
};


class Cart {//메인 구현
private:
	int number;
	char classname[20];
	char classNum[20];

	string class_name[3] = { "c++프로그래밍","리눅스 프로그래밍","리버싱" };
	string class_000[3] = { "0001","0002","0003" };


public:
	string mybag[3]; //강의이름 저장

	void bag_course(); //2번 강의담기 기능 함수
	void put_bag(); //3번 수강 신청 확인 함수
	void print();
};


//리턴 함수
string Member::getName(string) {
	return Name;
}
string Member::getID(string) {
	return ID;
}
string Member::getPassword(string) {
	return PW;
}


//입력받는 함수
void Member::setName(string a) {
	Name = a;
}
void Member::setID(string a) {
	ID = a;
}
void Member::setPassword(string a) {
	PW = a;
}


//2번 강의 담기 함수
void Cart::bag_course() {
	string num;
	cout << "추가할 학수 번호>>";
	cin >> num;

	if (num == "0001") {
		for (int i = 0; i < 3; i++) {
			if (mybag[i] == "\0") { //mybag에 없으면
				mybag[i] = "c++ 프로그래밍";//저장
				break;
			}
			else if (mybag[i] == "c++ 프로그래밍") {
				cout << "이미 MY 장바구니에 담겨 있습니다." << endl;
				break;
			}
		}
	}
	else if (num == "0002")
		for (int i = 0; i < 3; i++) {
			if (mybag[i] == "\0") { //mybag에 없으면
				mybag[i] = "리눅스 프로그래밍";//저장
				break;
			}
			else if (mybag[i] == "리눅스 프로그래밍") {
				cout << "이미 MY 장바구니에 담겨 있습니다." << endl;
				break;
			}
		}
	else if (num == "0003")
		for (int i = 0; i < 3; i++) {
			if (mybag[i] == "\0") { //mybag에 없으면
				mybag[i] = "리버싱";//저장
				break;
			}
			else if (mybag[i] == "리버싱") {
				cout << "이미 MY 장바구니에 담겨 있습니다." << endl;
				break;
			}
		}

}


//3번 수강 신청 확인 기능 함수
void Cart::put_bag() { //내가 고른 강의 이름
	cout << "==========My 장바구니==========" << endl;
	for (int i = 0; i < 3; i++)
		cout << i + 1 << ". " << mybag[i] << endl;

}

void Cart::print() {
	cout << "==========강의목록==========\n";
	for (int i = 0; i < 3; i++) {
		cout << "[" << i << "]";
		cout << class_name[i] << " >> ";
		cout << class_000[i] << endl;
	}
}

int main() {
	Member P;
	Member* p;
	p = &P;

	while (1) {
		int num, i;
		cout << "----------------서울여자대학교 종합정보시스템----------------\n1.회원가입\n2.로그인\n\n";
		cout << "번호를 입력하세요>> ";
		cin >> num;

		if (num == 1) {
			string id, pw, name;

			cout << "\n이름: ";
			cin >> name;
			p->setName(name);

			cout << "아이디: ";
			cin >> id;
			p->setID(id);

			cout << "비밀번호: ";
			cin >> pw;
			p->setPassword(pw);

			cout << "\n===회원가입 성공===\n\n";

		}
		else if (num == 2) {
			string id, pw, name;

			cout << "\n아이디: ";
			cin >> id;

			cout << "비밀번호: ";
			cin >> pw;

			if ((id == p->getID(id)) && (p->getPassword(pw) == pw)) {
				cout << "\n===로그인 성공===\n" << p->getName(name) << "님 환영합니다.";

				int n = 0;
				Cart pt;
				Cart* p;
				p = &pt;

				while (1) {

					
					cout << "=================" << endl;
					cout << "1.장바구니\n2.강의 담기\n3.수강 신청 확인\n4.로그아웃";
					cout << "\n\n번호를 입력하세요>> ";
					cin >> n;

					if (n == 1)
						p->print();

					else if (n == 2)
						p->bag_course();


					else if (n == 3)
						p->put_bag();

					else if (n == 4) {
						cout << "------------로그아웃----------\n로그아웃되었습니다. 안녕히가세요.\n";
						break;
					}
					else
						cout << "아이디 혹은 비밀번호가 틀렸습니다.";
				}
			}
		}
		else
			cout << "1 또는 2만 입력해주세요.";


	}
}
