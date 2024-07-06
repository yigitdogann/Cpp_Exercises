#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//vector<type> name(size);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    
    vector<int>vect;
    for(int i=0; i<n; i++){
        int value;
        cin>>value;
        vect.push_back(value);
    }
    
    sort(vect.begin(), vect.end());
    
    for(auto x : vect){
        cout<< x << ' ';
    }
    
    return 0;
}
