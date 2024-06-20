#include <iostream>
#include <string>

int main(void) {

	std::cout << "Name: ";
	std::string name;
	std::getline(std::cin, name);
//dont need to use std::cin>>std::ws, theres no earlier inputs

	if (name.empty()) {
		std::cout << "you didnt write a name";
	}

	if (name.length() > 12) {
		std::cout << "Name cannot be over 12 chars.";
	}
	else {
		std::cout << "Welcome, " << name;
	}


	name.append("@gmail.com"); //add string to END

	name.insert(0, "@"); //add string to the n-th digit
	
	std::cout << name.at(2) << std::endl ; //displays the n-th character

	name.erase(3, 6); //erase between 3 and 6th index

	name.find(' '); //this can find any char in the string
	
	name.clear(); //this will empty the variable

	return 0;
}