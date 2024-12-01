//22-11-2013 midterm, question 4 (24pts).
#include <iostream>
using namespace std;

class myclass {
public:
	double a, b;
	myclass(double x, double y) {
		a = x; b = y;
		cout << "constructing object a=" << a << " b=" << b << endl;
	}
	myclass() {
		a = 5; b = 10; cout << "constructing object (without parameters) a=" << a << " b=" << b << endl;
	}
	~myclass() {
		cout << "destroying object. a" << a << " b=" << b << endl;
	}
	void show_ob() {
		cout << "value of a=" << a << "value of b=" << b << endl;
	}
};
int main(void) {
	myclass ob_1(0, 0), ob_2;
	ob_1.show_ob();
	{ myclass ob_3(20, 50); };
	ob_2.show_ob();
	return 0;
}