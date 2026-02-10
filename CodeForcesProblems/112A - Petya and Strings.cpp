/*Dictionary Order,
compare 2 string input,
case doesn't matter.
1st higher -> 1, opposite -> -1*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	//close sync with C to speed up.
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	//if no spaced string, use 'cin'. otherwise 'getline'.
	string s1, s2;
	cin >> s1 >> s2;

	for(int i=0; i<s1.length(); i++) {
		s1[i]=tolower(s1[i]);
		s2[i]=tolower(s2[i]);

		if(s1[i]>s2[i]) {
			cout << "1";
			return 0;
		}
		else if(s1[i]<s2[i]) {
			cout << "-1";
			return 0;
		}
	}
	
	cout << "0";
	return 0;
}

/*
whenever cin used, it saves last enter(\n) as input
to memory. even though for integer inputs.
on upcoming input, it uses this \n as input. basic bug.
we have to delete \n after int inputs by adding:
cin.ignore();
*/