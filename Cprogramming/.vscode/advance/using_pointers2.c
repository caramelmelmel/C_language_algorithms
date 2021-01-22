#include<stdio.h>

int main(){
    int a,b;
    int *ptr;
    
    // add of var a 
    ptr = &a;
    //stored in var a 
    *ptr = 1234;
    ptr = &b;
    *ptr = 4567;
    printf("A is %d and B is %d\n",a,b);

    return 0;
}