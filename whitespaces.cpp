/*
"std::ws" : Clears the earlier white spaces before taking input.

		  Consider we took an input with "std::cin". we normally
		  press the enter button to confirm the input, and
		  enter creates a white space, newline.

		  If we dont clear that white space, cin will use it
		  like an input. Hence we dont want this to happen, we
		  have to avoid by using std::ws

		  However, if theres no earlier inputs, then we dont
		  need to clear whitespaces.

		  (alternative method: "std::cin.ignore")
*/

#include <iostream>
#include <string>

int main(void) {

	std::string sentence;
	int num;

	std::cout << "get number: ";
	std::cin >> num;

	std::cout << "get sentence: ";
	std::getline(std::cin >> std::ws, sentence);

	std::cout << "stored sentence is: " << sentence;


	return 0;
}