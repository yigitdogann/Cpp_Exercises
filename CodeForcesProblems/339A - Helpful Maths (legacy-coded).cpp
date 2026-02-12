#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int ones=0, twos=0, threes=0;
	string s;
	cin >> s;

	for(int i=0; i<s.length(); i+=2) {
		if(s[i]=='1') ones++;
		if(s[i]=='2') twos++;
		if(s[i]=='3') threes++;
	}

	while(ones) {
		cout << "1";
		ones--;
		if(ones || twos || threes) cout << "+";
	}
	while(twos) {
		cout << "2";
		twos--;
		if(twos || threes) cout << "+";
	}
	while(threes) {
		cout << "3";
		threes--;
		if(threes) cout << "+";
	}

	return 0;
}