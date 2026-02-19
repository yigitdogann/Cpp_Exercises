/*find if reversed*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s1="", s2="";
	cin >> s1 >> s2;
	int len = s1.length();

	for(int i=0; i<s1.length(); i++) {
		if(s1[i]!=s2[len-1] || s1.length()!=s2.length()) {
			cout << "NO";
			return 0;
		}
		len--;
	}

	cout << "YES";
	return 0;
}