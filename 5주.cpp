#include <iostream>
using namespace std;

class Member {//�α��� ���� �ڵ�
	int N;
	string Name;
	string ID;
	string PW;

public:
	//�����Լ�
	string getName();
	string getID();
	string getPassword();

	//�Է� �޴� �Լ�
	void setName(string name);
	void setID(string Id);
	void setPassword(string pw);
};


class Cart {//���� ����
	int number;
	char classname[20];
	char classNum[20];
	Cart mybag[3];

public:
	void bag_course(int classnum);
	void put_bag();
	void print();
	

	string getName();//�̸� �� ����
	string getID();//ID �� ����
};


string Member::getName() { //name �� ����
	return Name;
}
string Member::getID() { //ID �� ����
	return ID;
}
string Member::getPassword() { //ID �� ����
	return PW;
}


	//�Է¹޴� �Լ�
void Member:: setName(string name) {
		cout << "�̸�: " << endl;
		cin >> name;
		Name = name;
	}
void Member:: setID(string Id) {
		cout << "���̵�: " << endl;
		cin >> Id;
		ID = Id;
	}
void Member:: setPassword(string pw) {
		cout << "��й�ȣ: " << endl;
		cin >> pw;
		PW = pw;
	}


//2�� ���� ��� ��� �Լ�
void Cart::bag_course(int classnum) {
	cout << "�߰��� �м� ��ȣ>>";
	cin >> classnum;
	classNum[20] = classnum;

	    //��ȣ ��ġ�ϸ� ���
	if (classNum == "0001") {
		mybag[0].number = 1;
		mybag[0].classname = "c++���α׷���";
		mybag[0].classNum = "0001";
	}
	if (classNum == "0002") {
		mybag[1].number = 2;
		mybag[1].classname = "������ ���α׷���";
		mybag[1].classNum = "0002";
	}
	if (classNum == "0003") {
		mybag[2].number = 3;
		mybag[2].classname = "������";
		mybag[2].classNum = "0003";
	}
		//�̹� ����
	int i = 0;
	for (i=0;i<3;i++)
	if (mybag[i].number==1|| mybag[i].number == 2|| mybag[i].number == 3){
		cout << "�̹� my��ٱ��Ͽ� �ֽ��ϴ�.";
		switch (mainscreen()); 
	}

	else //�߸� �Է�-> ����ȭ�� �ٽ� ���
	{
		switch (mainscreen());
	}
}


//3�� ���� ��û Ȯ�� ��� �Լ�
void Cart::put_bag() {
		//my ��ٱ��� ���
	int* p;
	
	int i = 0;
	for (i = 0; i < 3; i++)
		cout << p->mybag[i].number << p->mybag[i].classname << p->mybag[i].classnum;
}

void Cart::print() { //1�� ��ٱ��� ��� ��� �Լ��� ���� ����� �迭�� �޾Ƽ� ���
	cout << "==========���Ǹ��==========";
	int i = 0;
	mybag[0].number = 1;
	mybag[0].classname = "c++���α׷���";
	mybag[0].classnum = "0001";
	mybag[1].number = 2;
	mybag[1].classname = "������ ���α׷���";
	mybag[1].classnum = "0002";
	mybag[2].number = 3;
	mybag[2].classname = "������";
	mybag[2].classnum = "0003";
}


int main() {
	while (1) {
		int num;
		cout << "----------------���￩�ڴ��б� ���������ý���----------------\n1.ȸ������\n2.�α���\n\n��ȣ�� �Է��ϼ���>>";
		cout << "��ȣ�� �Է��ϼ���>>";
		cin >> num;

		if (num == 1) {//ȸ������
			string setName();
			string setID();
			string setPassword();
			cout << "===ȸ������ ����===";
		}
		if (num == 2) {//�α���
			string setID();
			string setPassword();
			string setName();
			string getPassword();
			string getId();
			string getName();
			if (setID() == getId() && setPassword() == getPassword()) {
				cout << getName() << "�� ȯ���մϴ�.";
				break;
			}
			else {
				cout << "���̵� Ȥ�� ��й�ȣ�� Ʋ�Ƚ��ϴ�.";
			}
		}
		else {
			cout << "1 �Ǵ� 2�� �Է����ּ���";
		}
	}
}

	//����ȭ��
int mainscreen() {
	int n;
	cout << "1.��ٱ���\\n2.���� ���\n3.���� ��û Ȯ��\n4.�α׾ƿ�";
	cout << "��ȣ�� �Է��ϼ���>>";
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
		cout << "------------�α׾ƿ�----------\n�α׾ƿ��Ǿ����ϴ�. �ȳ���������.";
	}


}

