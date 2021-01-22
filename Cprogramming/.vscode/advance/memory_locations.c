#include<stdio.h>

int main(){
    int a;
    char b;
    float c;

    // & is the address of operator 
    
    puts("Memory locations:");
    printf("A is at %p\n",&a);
    printf("B is at %p\n",&b);
    printf("C is at %p\n",&c);
    return 0;
}