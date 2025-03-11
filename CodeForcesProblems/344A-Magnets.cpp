#include <iostream>
using namespace std;

//minus: 1, plus: 0.
int main() {
	int n, ctr = 1, previous;
	cin>>n;
	cin>>previous; //get first magnet placement to compare.

	for(int i=0; i<n-1; i++) {
		int next;
		cin>>next;

		//if next isn't have the same placing, then change the previous & increment ctr.
		if(!(next == previous)) {
			previous = next;
			ctr++;
		}
	}

	cout<<ctr; //print the number of groups.

	return 0;
}