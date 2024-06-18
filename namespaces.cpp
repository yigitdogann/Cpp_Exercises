/*in one namespace we can assign our variables and
even we can define functions in it. Namespaces let
us avoid problems like same variable names but
different values.*/
#include <iostream>

namespace first {
	int x = 10;
	void myFunction();
}
namespace second {
	int x = 20;
	void myFunction();
}

int main(void) {

	std::cout << "first value of x is: " << first::x << std::endl;
	std::cout << "second value of x is: " << second::x << '\n';

	first::myFunction();
	second::myFunction();

	return 0;
}