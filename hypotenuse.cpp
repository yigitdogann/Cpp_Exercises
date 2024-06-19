#include <iostream>
#include <cmath>

int main(void) {

	std::cout << "\t \tHyopotenuse Calculator\n";
	
	double a, b, c;
	std::cout << "enter first side: ";
	std::cin >> a;

	std::cout << "enter second side: ";
	std::cin >> b;

	c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));

	std::cout << "Length of Hypotenuse is: " << c << std::endl;

	return 0;
}