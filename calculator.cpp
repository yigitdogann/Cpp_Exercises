#include <iostream>

int main(void) {

	char choice;
	double n1, n2, result;

	std::cout << "\t\t-----CALCULATOR-----\n";
	
	std::cout << "Calculating operations ( +  -  *  / )" << std::endl;
	std::cout << "Chosen operation is: ";
	std::cin >> choice;

	std::cout << "First number: ";
	std::cin >> n1;
	std::cout << "Second number: ";
	std::cin >> n2;

	switch (choice) {
		case '+':
			result = n1 + n2;
			break;
		case '-':
			result = n1 - n2;
			break;
		case '*':
			result = n1 * n2;
			break;
		case '/':
			result = n1 / n2;
			break;
		default:
			std::cout << "Failed calculations! Check numbers.";
			break;
	}

	std::cout << "The result is: " << result << std::endl;

	std::cout << "\t\t--------------------";

	return 0;
}