/*hence we have limited input bounds
(1000-9000), holding digits is faster*/
#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	while(n<=9012) {
		//increment to next number
		n++;

		int a = n%10;//last digit
		int b = (n/10)%10;//last-1
		int c = (n/100)%10;//last-2
		int d = n/1000;//first digit

		if((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d)) {
			cout << n;
			return 0;
		}
	}
	return 1;
}