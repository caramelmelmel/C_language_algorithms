#include<stdio.h>
int main(){
    int a,b;
    int *ptr;
    a = 1234;
    //mem location pointer's address
    ptr = &a;
    //assigned the pointer's address
    b = *ptr;

    printf("A is %d and B is %d\n",a,b);
    return 0;
}