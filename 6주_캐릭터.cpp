#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Character { //Character Ŭ���� ����
private:
	char* name;
	int age;
	char* job;

public:
	Character(const char* name, int age, const char* job); //������
	Character(const Character& character); //���� ������
	~Character(); //�Ҹ���
	void show() {
		cout << "******ĳ���� ����******" << endl;
		cout << "ĳ���� �̸�: " << name << endl;
		cout << "ĳ���� ����: " << age << endl;
		cout << "ĳ���� ����: " << job << "\n\n";
	}
	void charac_change(const char* name, int age, const char* job) {
		strcpy(this->name, name); //name�� ���ڿ� ����
		this->age = age; //age ����??
		strcpy(this->job, job); //job�� ���ڿ� ����
	}
};

Character::Character(const char* name, int age, const char* job) { //������
	int len_name = strlen(name); //name�� ���� ����
	this->name = new char[len_name + 1]; //name ���ڿ� ���� �Ҵ�
	strcpy(this->name, name); //name�� ���ڿ� ����

	this->age = age; //age ����??

	int len_job = strlen(job); //job�� ���� ����
	this->job = new char[len_job + 1]; //job ���ڿ� ���� �Ҵ�
	strcpy(this->job, job); //job�� ���ڿ� ����
}
 
Character::Character(const Character& character) { //���� ������
	int len_name = strlen(character.name); //name�� ���� ����
	this->name = new char[len_name + 1]; //name�� ���� ���� �Ҵ�
	strcpy(this->name, character.name); //name�� ���ڿ� ����

	this->age = character.age; //id�� ����??

	int len_job = strlen(character.job); //job�� ���� ����
	this->job = new char[len_job + 1]; //job�� ���� ���� �Ҵ�
	strcpy(this->job, character.job); //job�� ���ڿ� ����
}

/////////////////////�� �κ� �ʿ��� �ǰ���??
Character::~Character() { //�Ҹ���
	while (1) {
		if (name) //���� name�� ���� �Ҵ�� �迭�� ������
			delete[] name; //���� �Ҵ� �޸� �Ҹ�
		else if (job) //���� job�� ���� �Ҵ�� �迭�� ������
			delete[] job; //���� �Ҵ� �޸� �Ҹ�
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

		cout << endl << "========ĳ���� ����========\n\n";
		cout << "1. ĳ���� ����" << endl;
		cout << "2. ĳ���� ����" << endl;
		cout << "3. ĳ���� ���� Ȯ��" << endl;
		cout << "4. ĳ���� ���� ����" << endl;
		cout << "5. ����" << endl;
		cout << "\n��ȣ�� �������ּ���: ";
		cin >> num;

		if (num == 1) { //ĳ���� ����
			cout << "\n������ ĳ������ �̸�, ����, ������ ������� �Է����ּ���.(�������� ����)" << endl;
			cout << "�������: ������ ������ �����Ӱ�\n--> ";
			cin >> charac_name >> charac_age >> charac_job; //�׳� �޾Ҵ��� �ƴ�??
			cout << "\nĳ���Ͱ� �����Ǿ����ϴ�." << endl;
		}

		if (num == 2) { //ĳ���� ����
			Character copy(A);
			cout << "\nĳ���Ͱ� ����Ǿ����ϴ�." << endl;
		}

		if (num == 3) { //ĳ���� ���� Ȯ��
			A.show(); //���1 ���
			if (charac_name)
				B.show(); //���2 ���
		}

		if (num == 4) { //ĳ���� ���� ����
			int charac_num;

			cout << "�����ϰ� ���� ĳ���͸� �����ϼ���.(1 or 2): ";
			cin >> charac_num;
			cout << "�����ϰ� ���� �̸�, ����, ������ �Է����ּ���.\n--> ";

			if (charac_num == 1) {
				cin >> charac_name2 >> charac_age2 >> charac_job2; //���� �Է� �޴´�
				A.charac_change(charac_name2, charac_age2, charac_job2);
			}

			if (charac_num == 2) {
				cin >> charac_name2 >> charac_age2 >> charac_job2;
				B.charac_change(charac_name2, charac_age2, charac_job2);
			}
			cout << "\n���������� �����Ǿ����ϴ�.\n";
		}

		if (num == 5)  { //����
			cout << "����Ǿ����ϴ�." << endl;
			break;
		}
	}
	return 0;
}