#include <iostream>
using namespace std;

int main(){
    int n, ctr=0;
    cin>>n; //number of rooms.
    
    for(int i=0; i<n; i++){
        int p, q; //p: current people, q: room capacity.
        cin>>p>>q;
        
        //if there's enough space for 2 friends, increase ctr.
        if((q-p)>=2)
            ctr++;
    }
    
    cout<<ctr;
    
    return 0;
}