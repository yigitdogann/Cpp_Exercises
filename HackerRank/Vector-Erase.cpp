#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, x, a, b;
    vector<int> vect;
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>q;
        vect.push_back(q);
    }
    
    cin>>x;//delete Xth.
    vect.erase(vect.begin()+(x-1));
    
    cin>>a>>b;//delete between Ath & Bth
    vect.erase(vect.begin()+(a-1), vect.begin()+(b-1));
    
    cout<<vect.size()<<endl;
    for(int i=0; i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }
    return 0;
}
