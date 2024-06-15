#include <iostream>

int main(void) {

	std::cout << "basic operations" << std::endl;

	int num1 = 5;
	int num2 = 12, sum=0;
	
	sum = num1 + num2;

	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	std::cout << "sum of these two is below:" << std::endl;
	std::cout << sum;

	return 0;
}

/*
std is standart library.
cout is output function.
i reach the cout function in std by using " :: "
endl puts newline (\n) after printing value.
*/