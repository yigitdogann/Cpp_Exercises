#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n=0, m=0, odds=0, evens=0, a=0, b=0;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin >> m;
        
        if(m%2==1){
            odds++;
            a=i;
        }else{
            evens++;
            b=i;
        }
    }
    if(odds==1) cout << a;
    else cout << b;
    
    return 0;
}