#include <iostream>
using namespace std;

class myclass {
private:
	int a;

public:
	myclass(int x); //Constructor
	void show();
};

//definition of constructor (can be inside or outside)
myclass::myclass(int x)
{
	cout << "constructor" << endl;
	a = x;
}

//definition of show function
void myclass::show(){
	cout << a << endl;
}

//driver function
int main(){
	myclass object_1(5);
	object_1.show();
	return 0;
}