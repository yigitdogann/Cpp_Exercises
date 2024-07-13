#include <iostream>
#include <queue>
using namespace std;

void printList(queue<int> list) {
	for (int i = 0; i < list.size(); i++) {
		cout << list.front() << " ";
		list.pop();	list.pop();
	}
}

int main(void) {
	int n;  cout << "until: "; cin >> n;
	queue<int> myLine;

	for (int i = 1; i <= n; i++) {
		myLine.push(i);
	}

	cout << "front: " << myLine.front() << endl;
	cout << "back: " << myLine.back() << endl;
	cout << "size: " << myLine.size() << endl;

	printList(myLine);
	
	return 0;
}