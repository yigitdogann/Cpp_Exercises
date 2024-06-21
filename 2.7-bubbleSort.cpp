//bubble-sort
#include <iostream>

void sort(int* array, int size);

int main(void) {
	int numbers[] = { 1,4,6,9,2,3,13 };
	int size = sizeof(numbers) / sizeof(numbers[0]);

	std::cout << "before ->";
	for (int i : numbers) {
		std::cout << i << " ";
	}

	sort(numbers, size);

	std::cout << "\nafter ->";
	for (int i : numbers) {
		std::cout << i << " ";
	}

	return 0;
}

void sort(int* array, int size) {
	int temp;

	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size - 1; j++) {

			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}

		}

	}
}