#include <iostream>
using namespace std;
//10: 1-3-5-7-9-2-4-6-8-10
//11: 1-3-5-7-9-11-2-4-6-8-10
//12: 1-3-5-7-9-11-2-4-6-8-10-12

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	long long n=0, k=0, odds=0;
	cin >> n >> k;

	//if true(odd) left, else right.
	(n%2) ? (odds=(n/2)+1) : (odds=n/2);

	if(k<=odds) {
		cout << (k*2)-1;
	} else {
		cout << 2*(k-odds);
	}

	return 0;
}