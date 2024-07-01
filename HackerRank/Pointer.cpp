#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int ta = *a;//hold old a with temp
    
    *a = *a + *b;//cuz' original a has changed here
    
    if(ta-*b<0){
        *b= -(ta-*b);
    }else{
        *b= (ta-*b);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}