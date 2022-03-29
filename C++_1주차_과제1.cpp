#include <iostream> //전처리기, 클래스와 객체 선언하는 헤더
using namespace std;// 선언된 이름에 std::생략

int main() { //C++표준 리턴 타입은 int
	int col;//콜라 가격
	int sam;//삼다수 가격
	int hwan;//환타 가격
	int c;//콜라 수량
	int s;//삼다수 수량
	int h;//환타 수량
	int price;//총 가격

	cout << "당신의 이름은 무엇입니까" << endl;//이름 묻는 출력
	char name[12];//char형으로 name 변수 설정, 배열 크기 여유롭게 설정
	cin.getline(name, 12);//공백 문자열 입력 받을 수 있다.
	cout << "반갑습니다 "<< name <<"님" << endl;
	cout << endl;

	cout << "----------SWING30----------" << endl;
	cout << "음료의 가격 입력을 시작합니다." << endl;

	cout << endl;

	cout << "콜라의 가격:" << endl;//콜라 가격이 얼마냐는 출력
	cin >> col; //콜라의 가격 입력
	cout << "삼다수의 가격:" << endl;//삼다수 가격이 얼마냐는 출력
	cin >> sam; //삼다수 가격 입력
	cout << "환타의 가격:" << endl;//환타의 가격이 얼마냐는 출력
	cin >> hwan; //환타의 가격 입력

	cout << endl;

	cout << "개수를 입력해주세요." << endl;

	cout << endl;

	cout << "콜라 수량:" << endl;//콜라의 수량 질문 출력
	cin >> c; //콜라 수량 입력
	cout << "삼다수 수량:" << endl;//삼다수 수량 질문 출력
	cin >> s; //삼다수 수량 입력
	cout << "환타 수량:" << endl;//환타 수량 질문 출력
	cin >> h; //환타 수량 입력

	price = (col * c + sam * s + hwan * h )- 500;//가격 구하고 500원 할인
	cout << "------------------------------" << endl;//구분선 출력
	cout << "500원을 할인받아 총"<<price<<"입니다." << endl;//총 가격 출력


}