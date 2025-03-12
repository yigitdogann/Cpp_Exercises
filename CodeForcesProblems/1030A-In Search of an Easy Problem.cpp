#include <iostream>
using namespace std;

int main(){
    //number of questions
    int n, ctr=0;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int ans;
        cin>>ans;
        
        ctr+=ans;
    }
    
    //at least 1 answer says it's hard(1), then print hard
    if(ctr!=0)
        cout<<"HARD";
    else
        cout<<"EASY";
    
    return 0;
}