#include <iostream>
#include <ctime>

char generator();
char player();
void control(char computer, char player);
int scoreBot=0, scorePlayer=0;
int winner();

int main(void) {
	srand(time(NULL));
	
	int check = 3;

	while (check != 0) {
		char computer = generator(), choice = player(); // can be R - P - S
		control(computer, choice);
		check = winner();
	}

	if (winner() == 2) {
		std::cout << "you lost\n";
	}else{
		std::cout << "you win\n";
	}

	return 0;
}

char generator() {
	char value;
	int i = (rand() % 3) + 1; //i={1,2,3}

	switch (i) {
	case 1:
		value = 'R';
		break;
	case 2:
		value = 'P';
		break;
	case 3:
		value = 'S';
		break;
	default:
		std::cout << "Generator error!\n";
	}

	return value;
}

char player() {
	char value;

	std::cout << "R for rock | P for paper | R for scissors\n";
	std::cout << "Choice: ";
	std::cin >> value;

	return value;
}

void control(char computer, char player) {

	switch (computer) {
	case 'R':
		if (player == computer) {
			std::cout << "\tROUND DRAW!\n";
		}
		else if (player == 'S' || player == 's') {
			std::cout << "\tROUND LOST!\n";
			scoreBot++;
		}
		else {
			std::cout << "\tROUND WON!\n";
			scorePlayer++;
		}
		break;

	case 'P':
		if (player == computer) {
			std::cout << "\tROUND DRAW!\n";
		}
		else if (player == 'S' || player == 's') {
			std::cout << "\tROUND WON!\n";
			scorePlayer++;
		}
		else {
			std::cout << "\tROUND LOST!\n";
			scoreBot++;
		}
		break;

	case 'S':
		if (player == computer) {
			std::cout << "\tROUND DRAW!\n";
		}
		else if (player == 'P' || player == 'p') {
			std::cout << "\tROUND LOST!\n";
			scoreBot++;
		}
		else {
			std::cout << "\tROUND WON!\n";
			scorePlayer++;
		}
		break;
	}
	
	return;
}

int winner() {
	if (scorePlayer == 2 && scoreBot == 1) {
		return 1;
	}
	else if (scorePlayer == 2 && scoreBot == 0) {
		return 1;
	}
	else if (scorePlayer == 1 && scoreBot == 2) {
		return 2;
	}
	else if (scorePlayer == 0 && scoreBot == 2) {
		return 2;
	}
	else {
		return 0;
	}
}