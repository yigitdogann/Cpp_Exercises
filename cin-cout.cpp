/*understanding of CIN & COUT*/

#include <iostream>
#include <string>

int main(void) {

	std::string firstName;
	std::string fullName;
	int age;

	std::cout << "whats your first name?" << '\n';
	std::cin >> firstName;
	std::cout << "Hi, " << firstName << std::endl;
//this block of code will not work if theres a white space on input
//so we can use "getline" function for strings which contains space

	std::cout << "whats your full name?" << '\n';
	std::getline(std::cin>>std::ws, fullName);


	std::cout << "whats your age?" << std::endl;
	std::cin >> age;
	std::cout << fullName << " is " << age << " years old." << std::endl;

	return 0;
}