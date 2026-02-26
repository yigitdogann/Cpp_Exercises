#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n=0;
	cin >> n;

	map<string, int> db;
	string user;

	while(n) {
		cin >> user;

		//map auto-inserts searched value
		if(db[user]==0) {
			//if doesn't appear, edit value as 1
			cout << "OK" << endl;
			db[user] = 1;
		} else {
			//user+number
			cout << user << db[user] << endl;

			//increment value for next copy
			db[user]++;
		}

		n--;
	}

	return 0;
}