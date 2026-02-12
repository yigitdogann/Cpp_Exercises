#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s="", nums="";
	cin >> s;

	for(int i=0; i<s.length(); i+=2) {
		//copy all from s to nums except "+"
		nums += s[i];
	}

	//sort the created string
	sort(nums.begin(), nums.end());

	for(int i=0; i<nums.length(); i++) {
		cout << nums[i];
		//if not last digit, put '+'
		if(i != (nums.length()-1)) cout << "+";
	}

	return 0;
}