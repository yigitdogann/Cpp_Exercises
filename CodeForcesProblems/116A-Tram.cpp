#include <iostream>
using namespace std;

int main(){
    int n, a, b, passenger=0, limit=0;
    cin>>n; //tram stop number
    
    for(int i=0; i<n; i++){
        cin>>a>>b; //get the info abt. leaving or joining
        passenger-=a;
        passenger+=b;
        
        //update the limit
        if(passenger>limit)
            limit = passenger;
    }
    
    cout<<limit;

    return 0;
}