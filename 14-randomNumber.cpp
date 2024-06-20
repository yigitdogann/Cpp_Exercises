/*
srand is a seed for making numbers unique.
	rand() creates random number.
	%6 finds its remainder. (0-1-2-3-4-5)
	+1 will fix the zero remainder. (1-2-3-4-5-6)
*/


#include <iostream>
#include <ctime>

int main(void) {

	srand(time(NULL));

	int num = (rand() % 6) + 1;	

	return 0;
}