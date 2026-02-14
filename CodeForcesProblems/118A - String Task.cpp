#include <iostream>
#include <string>
using namespace std;
//vowels "A", "O", "Y", "E", "U", "I"

bool isVowel(char c);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s="", p="";
	cin >> s;//get input

	for(int i=0; i<s.length(); i++) {
		//make current char lowercase
		char ch = tolower(s[i]);

		//work if not wovel
		if(!isVowel(ch)) {
			p += ".";
			p += ch;
		}
	}

	cout << p;

	return 0;
}

//return true even if one of them is vowel
bool isVowel(char c) {
	return(c=='a' || c=='o' || c=='y' || c=='e' || c=='u' || c=='i');
}