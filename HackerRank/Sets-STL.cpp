#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >> q;
    set<int> mySet;
    
    for(int i=0; i<q; i++){
        int x, y;  cin>>x>>y;
        
        switch (x) {
            case 1:
                mySet.insert(y);
                break;
            case 2:
                mySet.erase(y);
                break;
            case 3:
                if(mySet.find(y) != mySet.end()){
                    cout<<"Yes\n";
                }else{
                    cout<<"No\n";
                }
                break;
            default:
                break;
        }
    }
    
    return 0;
}
