/*Bin packing problem,
n groups, i students for related group,
taxi carries up to 4 students*/
#include <iostream>
using namespace std;

int main(){
    int i, n, taxi=0;
    cin>>n;
    
    //count the number of groups with 1-2-3 students
    int g1=0, g2=0, g3=0;
    for(int j=0; j<n; j++){
        cin>>i;
        if(i==4) taxi++;//if 4 students, then already 1 taxi
        if(i==3) g3++;
        if(i==2) g2++;
        if(i==1) g1++;
    }
    
    while(g3){
        if(g1>0) g1--;
        
        g3--;
        taxi++;
    }
    
    //group in pairs(2's)
    taxi += g2/2;
    
    if((g2%2)==1){
        g1 -= 2;//if one group with 2 remained, give two 1s
        taxi++;//give them a taxi
        if(g1<0) g1=0;//if negative, fix it. np.
    }
    
    //group the different four 1s.
    taxi += g1/4;
    if((g1%4)!=0) taxi++;
    
    cout << taxi;
    
    return 0;
}