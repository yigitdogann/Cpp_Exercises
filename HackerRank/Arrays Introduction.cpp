/*Note Unlike C, C++ allows dynamic allocation of 
arrays at runtime without special calls like malloc().*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin>>n;
    int A[n];
    
    for(int i=1; i<=n; i++){
        scanf("%d ", A+i);
    }
    for(;n>0;n--){
        printf("%d ", A[n]);
    }
    
    
    return 0;
}
