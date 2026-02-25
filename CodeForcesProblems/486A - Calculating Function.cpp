/*sum of the;
first k odd numbers: k^2
first k even numbers: k*(k+1)
*/
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	//longlong type is must because bounds
	long long n=0, sum=0, evens=0, odds=0;
	cin >> n;

	//if 1(odd); left, otherwise right.
	(n%2) ? (odds = (n/2)+1) : (odds = (n/2));
	evens = n/2;

	sum -= odds*odds;
	sum += evens*(evens+1);

	cout << sum;
	return 0;
}