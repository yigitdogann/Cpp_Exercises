#include <iostream>
#define SIZE 100

int main(void) {

	std::string beverages[SIZE];

	/*c++ has a function called fill() and it fills
	our array by calculating its pointer arithmetic
	hence we dont need to work with for loop for it*/
	    
	fill(beverages, beverages + SIZE, "lemonade");

	for (std::string beverages : beverages) {
		std::cout << beverages<<"\n";
	}

	return 0;
}