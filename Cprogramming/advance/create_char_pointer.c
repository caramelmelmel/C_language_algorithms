#include<stdio.h>

int main(){
    char a,b,c;
    char *p;
    a = 'A';
    p = &a;
    b = *p;
    p = &c;
    *p = 'Z';

    printf("The value of a is %c\n The value of b is %c\n and the value of c is %c\n",a,b,c);
    return 0;

}