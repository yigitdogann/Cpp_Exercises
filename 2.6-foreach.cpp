/*
this method is called for-each loop and
it helps us to traverse in our ARRAY easily
*/


#include <iostream>

int main(void) {

	std::string cars[] = { "volvo", "volkswagen", "bentley" };

	for (std::string car : cars) {
		std::cout << car << std::endl;
	}

	int numbers[] = { 1,2,4,5,76,9 };

	for (int num : numbers) {
		std::cout << num << std::endl;
	}

	return 0;
}