#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	int n=0, a=0, d=0;
	cin >>n>>s;

	for(int i=0; i<s.length(); i++) {
		if(s[i]=='A') a++;
		else d++;
	}

	if(a>d) {
		cout<<"Anton";
	} else if(d>a) {
		cout<<"Danik";
	} else {
		cout<<"Friendship";
	}
	return 0;
}