#include <iostream>
#include <cmath>

int main(void) {

	double x = 5;
	double y = 9;
	double z = 3.1415;
	double max, min;

	max = std::max(x, y);
	min = std::min(x, y);

	std::cout <<"max: "<< max << std::endl;
	std::cout <<"min: "<< min << std::endl;

	double power = std::pow(2, 3); //2^3
	std::cout << power<<'\n';

	double squareRoot = std::sqrt(9); //9^(1/2)
	std::cout << squareRoot << '\n';

	double absolute = std::abs(-14); //absolute value
	std::cout << absolute << std::endl;

	double rounded = std::round(z); //normal rounding rules
	std::cout << rounded << std::endl;

	double ceil = std::ceil(z); //3.26 goes to 4
	double floor = std::floor(z); //3.89 goes to 3

	return 0;
}