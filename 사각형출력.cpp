#include <iostream>
using namespace std;


class Box {
	char x;
	int width;
	int height;
public:
	Box(int w, int h) {
		width = w;
		height = h;
		x = '*';
	}
	void set_char_change(char a) {
		x = a;
	}
	void set_size_change(int w, int h) {
		width = w;
		height = h;
	}
	void print();
};

void Box::print() {
	for (int i = 0; i < height; i++) {
		for (int h = 0; h < width; h++) {
			cout << x;
		}cout << endl;
	}
}

int main() {
	Box F1(3, 4);
	Box F2(6, 2);
	F1.print();
	F2.set_char_change('^');
	F2.print();
	return 0;
}