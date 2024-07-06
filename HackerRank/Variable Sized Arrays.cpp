#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int r, q; //r: rows, q: queries
    cin >> r >> q;
    
    int *arr[r];
    
    //fill the array
    for(int i=0; i<r; i++){
        int digit;
        cin >> digit;
        
        arr[i] = new int[digit];
        
        for(int j=0; j<digit; j++){
            cin >> arr[i][j];
        }
    }
    
    //print the array
    for(int i=0; i<q; i++){
        int j, k;
        cin >> j >> k;
        
        cout<<arr[j][k]<<endl;
    }
    return 0;
}
