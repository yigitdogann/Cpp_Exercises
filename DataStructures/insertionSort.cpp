#include <iostream>

void sort(int arr[], int size);

int main(void) {
	std::cout << "\tinsertion sort\n\n";
	int arr[] = { 6, 1, 7, 4, 2, 9, 8, 5, 3 };

	std::cout << "not sorted:\t";
	for (int n : arr) {
		std::cout << n << " ";
	}

	std::cout << "\n\n<< sorting.. >>\n\n";
	int size = sizeof(arr) / sizeof(int);
	sort(arr, size);


	return 0;
}

void sort(int arr[], int size) {
	int temp;
	for (int i = 1; i < size; i++) {//loop (length - 1) times
		temp = arr[i];
		int j = i - 1;

		while (arr[j] > temp) {
			arr[j+1] = arr[j];
			j--;
		}//replace until left is lower

		arr[j+1] = temp;
	}

	std::cout << "sorted:\t\t";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

}