/*heights mustn't exceed h
person width=1, if duck width=2
find min. width*/
#include <iostream>
using namespace std;

int main() {
	int n=0, h=0, width=0, a=0;
	//friends & fence height
	cin >> n >> h;

	for(int i=0; i<n; i++) {
		cin >> a;
		if(a<=h) width++;
		else width+=2;
	}

	cout << width;
	return 0;
}