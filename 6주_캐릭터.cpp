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
	Character(const char* name, int age, const char* job); //생성자
	Character(const Character& character); //복사 생성자
	~Character(); //소멸자
	void show() {
		cout << "******캐릭터 정보******" << endl;
		cout << "캐릭터 이름: " << name << endl;
		cout << "캐릭터 나이: " << age << endl;
		cout << "캐릭터 직업: " << job << "\n\n";
	}
	void charac_change(const char* name, int age, const char* job) {
		strcpy(this->name, name); //name에 문자열 복사
		this->age = age; //age값 복사
		strcpy(this->job, job); //job에 문자열 복사
	}
};

Character::Character(const char* name, int age, const char* job) { //생성자
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

/////////////////////이 부분 필요한 건가요??
Character::~Character() { //소멸자
	while (1) {
		if (name) //만일 name에 동적 할당된 배열이 있으면
			delete[] name; //동적 할당 메모리 소멸
		else if (job) //만일 job에 동적 할당된 배열이 있으면
			delete[] job; //동적 할당 메모리 소멸
	}
}


int main() {
	char charac_name[20], charac_name2[20];
	int charac_age, charac_age2;
	char charac_job[20], charac_job2[20];

	Character A(charac_name, charac_age, charac_job);
	Character B(charac_name2, charac_age2, charac_job2);

	while (1) {
		int num;
		Character copy(A);

		cout << endl << "========캐릭터 관리========\n\n";
		cout << "1. 캐릭터 생성" << endl;
		cout << "2. 캐릭터 복사" << endl;
		cout << "3. 캐릭터 정보 확인" << endl;
		cout << "4. 캐릭터 정보 수정" << endl;
		cout << "5. 종료" << endl;
		cout << "\n번호를 선택해주세요: ";
		cin >> num;

		if (num == 1) { //캐릭터 생성
			cout << "\n생성할 캐릭터의 이름, 나이, 직업을 순서대로 입력해주세요.(공백으로 구분)" << endl;
			cout << "참고사항: 직업의 종류는 자유롭게\n--> ";
			cin >> charac_name >> charac_age >> charac_job; //그냥 받았더니 됐다??
			cout << "\n캐릭터가 생성되었습니다." << endl;
		}

		if (num == 2) { //캐릭터 복사
			Character copy(A);
			cout << "\n캐릭터가 복사되었습니다." << endl;
		}

		if (num == 3) { //캐릭터 정보 확인
			A.show(); //사람1 출력
			if (charac_name)
				B.show(); //사람2 출력
		}

		if (num == 4) { //캐릭터 정보 수정
			int charac_num;

			cout << "수정하고 싶은 캐릭터를 선택하세요.(1 or 2): ";
			cin >> charac_num;
			cout << "설정하고 싶은 이름, 나이, 직업을 입력해주세요.\n--> ";

			if (charac_num == 1) {
				cin >> charac_name2 >> charac_age2 >> charac_job2; //새로 입력 받는다
				A.charac_change(charac_name2, charac_age2, charac_job2);
			}

			if (charac_num == 2) {
				cin >> charac_name2 >> charac_age2 >> charac_job2;
				B.charac_change(charac_name2, charac_age2, charac_job2);
			}
			cout << "\n정상적으로 수정되었습니다.\n";
		}

		if (num == 5)  { //종료
			cout << "종료되었습니다." << endl;
			break;
		}
	}
	return 0;
}
