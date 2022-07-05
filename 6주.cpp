#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Character { //Character 클래스 선언
private:
	char* name;
	int age;
	char* job;

public:
	Character(const char* name, int age, char* job); //생성자
	Character(const Character& character); //복사 생성자
	
	void charac_show() {
		cout << "\n******캐릭터 정보******\n";
		cout << "캐릭터 이름: " << name << endl;
		cout << "캐릭터 나이: " << age << endl;
		cout << "캐릭터 직업: " << job << "\n\n";
	}
	void start();
	void charac_make();
	void charac_change();
};

Character::Character(const char* name, int age, char* job) { //생성자
	int len_name = strlen(name); //name의 문자 개수
	this->name = new char[len_name + 1]; //name 문자열 공간 할당
	strcpy(this->name, name); //name에 문자열 복사

	this->age = age; //age값 복사

	int len_job = strlen(job); //job의 문자 개수
	this->job = new char[len_job + 1]; //job 문자열 공간 할당
	strcpy(this->job, job); //job에 문자열 복사
}
 
Character::Character(const Character& character) { //복사 생성자
	int len_name = strlen(character.name); //name의 문자 개수
	this->name = new char[len_name + 1]; //name을 위한 공간 할당
	strcpy(this->name, character.name); //name의 문자열 복사

	this->age = character.age; //age값 복사

	int len_job = strlen(character.job); //job의 문자 개수
	this->job = new char[len_job + 1]; //job을 위한 공간 할당
	strcpy(this->job, character.job); //job의 문자열 복사
}

void start() {
	cout << endl << "========캐릭터 관리========\n\n";
	cout << "1. 캐릭터 생성" << endl;
	cout << "2. 캐릭터 복사" << endl;
	cout << "3. 캐릭터 정보 확인" << endl;
	cout << "4. 캐릭터 정보 수정" << endl;
	cout << "5. 종료" << endl;
	cout << "\n번호를 선택해주세요: ";
}
void Character::charac_make() {
	cout << "\n생성할 캐릭터의 이름, 나이, 직업을 순서대로 입력해주세요.(공백으로 구분)" << endl;
	cout << "참고사항: 직업의 종류는 자유롭게\n--> ";
	cin >> name >> age >> job;
}

void Character::charac_change() {
	cout << "설정하고 싶은 이름, 나이, 직업을 입력해주세요.\n-->\n";
	cin >> name >> age >> job;
	cout << "정상적으로 수정되었습니다.\n";
}

int main() {
	char name[20];
	int age = 0;
	char job[20];
	int num = 0;

	Character A(name, age, job);

	start();
	cin >> num;

	A.charac_make();
	cout << "\n캐릭터가 생성되었습니다." << endl;
	A.charac_show();

	Character B(A);
	cout << "\n캐릭터가 복사되었습니다." << endl;

	while (1) {
		start();
		cin >> num;

		if (num == 3) {
			A.charac_show();
			B.charac_show();
		}

		if (num == 4) {
			int charac_num;

			cout << "수정하고 싶은 캐릭터를 선택하세요.(1 or 2): ";
			cin >> charac_num;

			if (charac_num == 1) {
				A.charac_change();
			}
			else if (charac_num == 2) {
				B.charac_change();
			}
		}

		else if (num == 4) {
			cout << "설정하고 싶은 이름, 나이, 직업을 입력해주세요.\n--> ";
			cin >> name >> age >> job;
			A.charac_change();
		}
		else if (num == 5) {
			cout << "종료되었습니다." << endl;
			break;
		}
	}
	return 0;
}
