#include<stdio.h>

//this is to declare how much of storage is being used by the variable 
int main(){
    int a;
    char b;
    short c;
    long d;
    float e;
    double f;

    struct stuff
    {
        int g;
        float h;
        char i[32];
    };
    
    printf("An integer variable occupies %lu bytes of storage\n",sizeof(a));
    printf("A character variable occupies %lu bytes of storage\n",sizeof(b));
    printf("An short variable occupies %lu bytes of storage\n",sizeof(c));
    printf("A long variable occupies %lu bytes of storage\n",sizeof(d));
    printf("A float variable occupies %lu bytes of storage\n",sizeof(e));
    printf("A double variable occupies %lu bytes of storage\n",sizeof(f));
    printf("The structure 'stuff' occupies %lu bytes of storage\n",sizeof(struct stuff));
    return 0;
}
/* OUTPUT
An integer variable occupies 4 bytes of storage
A character variable occupies 1 bytes of storage
An short variable occupies 2 bytes of storage
A long variable occupies 8 bytes of storage
A float variable occupies 4 bytes of storage
A double variable occupies 8 bytes of storage
*/