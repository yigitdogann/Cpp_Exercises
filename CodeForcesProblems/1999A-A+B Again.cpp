#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n[t];
    
    //store the numbers in an array
    for(int i=0; i<t; i++){
        cin>>n[i];
    }
    
    
    for(int i=0; i<t; i++){
        int out=0;
        
        out+=n[i]%10; //add last digit
        n[i]/=10; //remove last digit
        out += n[i]; //add last digit
        
        cout<<out<<endl;
    }
    
    return 0;
}