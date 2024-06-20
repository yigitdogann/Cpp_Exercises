//variable types
#include <iostream>

int main(void) {

	int n1 = 24; //whole number
	float n2 = 24.99; //decimal number
	double n3 = 24.99; //decimal number (2x size of float)
	std::cout << "price of coke is: " << n3 << std::endl;
	
	bool obesity = true; //true-false
	char a = '$'; //only one character

	std::string name = "yigit"; //c++ has strings
	std::cout << "my name is " << name <<", and nice to meet you." << std::endl;
	
	//if you want to cover the value, then use const.
	const double PI = 3.1415;
	const int WIDTH = 1920, HEIGHT = 1080;

	return 0;
}
