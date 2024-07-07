#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

//"<<" to add, ">>" extract datas.

vector<int> parseInts(string str) {
	// Complete this function
    
    stringstream ss(str);
    char ch;
    int temp;
    vector<int> rtn;
    
    while(ss >> temp){
        rtn.push_back(temp);
        ss >> ch; //collect commas (delete it, basically).
    }
    
    return rtn;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
