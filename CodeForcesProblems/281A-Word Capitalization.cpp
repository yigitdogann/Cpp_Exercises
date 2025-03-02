#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    //ascii value control of first char
    if(str[0]>91)
        str[0] -= 32;
    
    cout<<str;
    return 0;
}