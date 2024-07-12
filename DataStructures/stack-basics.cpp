#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	int n; cout << "until: ";  cin >> n;
	stack<int> myStack;
	
	for (int i = 1; i <= n; i++) {
		myStack.push(i);
	}

	cout << "Top of the stack: " << myStack.top() << endl;

	for (int i = 1; i <= n / 2; i++) {
		myStack.pop();
	}

	cout << "Half popped: " << myStack.top() << endl;

	while (!myStack.empty()) { myStack.pop();	cout << "deleting\n";}

	if (myStack.empty()) cout << "empty list";

	return 0;
}