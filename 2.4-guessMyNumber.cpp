#include <iostream>
#include <ctime>

int main(void) {

	int num, guess, tries=0;

	srand(time(NULL));
	num = (rand() % 50) + 1;

	do {
		std::cout << "Guess the number between 1-50" << std::endl;
		std::cin >> guess;
		tries++;

		if (guess > num) {
			std::cout << "Too high, make a new guess!" << '\n';
		}else if (guess < num) {
			std::cout << "Too low, make a new guess!" << '\n';
		}else {
			std::cout << "Correct answer in " << tries << " tries, congrats!" << '\n';
		}

	} while (guess != num);

	

	return 0;
}