#include <iostream>
#include <cstring>
using namespace std;

int bank[4] = { 5000, 4000, 0 ,10 };

int total(int* a, int* b, int* c, int* d) {

	int result = *a + *b + *c + *d;
	return result;
}

int main() {
	
	int total_money;
	total_money = total(&bank[0], &bank[1], &bank[2], &bank[3]); //totalÇÔ¼ö È£Ãâ

	cout<<"총 금액 : "<<total_money;
}
