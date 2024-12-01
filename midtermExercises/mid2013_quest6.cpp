//22-11-2013 midterm, question 6 (24pts).
#include <iostream>
using namespace std;

class myclass {
public: 
	double a, b;
	myclass(double x, double y) {
		a = x; b = y;
		cout << "constructing object a=" << a << " b=" << b << endl;
	}
	~myclass() {
		cout << "destroying object a=" << a << "b= " << b << endl;
	}
	void show_ob() {
		cout << "value of a= " << a << "value of b= " << b << endl;
	}
};

myclass fun1(myclass ob1){
	myclass ob2(10, 20);
	ob2.a = ob2.a * ob1.a;
	ob2.b = ob2.b - ob1.b;
	return ob2;
}

int main() {
	myclass obx(1, 2), oby(5, 6);
	obx.show_ob();
	oby.show_ob();
	oby = fun1(obx);
	oby.show_ob();
	return 0;
}