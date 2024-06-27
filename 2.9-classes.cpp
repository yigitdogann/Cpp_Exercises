/*functions in classes are called methods.
  structs and classes are different because
  in classes we have methods too.
  
  and the values can be arranged in the 
  class section*/

#include <iostream>

class Human {
public:
	std::string name;
	std::string occupation;
	int age;

	void eat() {
		std::cout << "this person is eating"<<std::endl;
	}

	void drink() {
		std::cout << "this person is drinking\n";
	}

	void sleep(){
		std::cout << "This person is sleeping\n";
	}
};

class DefaultHuman {
public:
	std::string name = "Clara";
	std::string occupation = "unemployed";
	int age = 0;
};

int main(void) {

	Human human1;
	human1.name = "YIGIT";
	human1.occupation = "STUDENT";
	human1.age = 20;

	std::cout << human1.name << human1.occupation << human1.age<< std::endl;
	human1.sleep();

	return 0;
}