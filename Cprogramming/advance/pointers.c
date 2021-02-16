#include<stdio.h>
/* 
Pointer: variable that holds a memory location, an address, a location of the specific variable
*/

int main(){
    int pokey;
    //below here is a pointer variable 
    int *p;

    pokey = 987;
    p = &pokey;

    printf("The address of 'pokey' is %p\n",&pokey);
    printf("The address of 'p' is %p\n",p);

    printf("The value of 'pokey' is %d\n",pokey);
    //ref to the memory location by using *p as the prefix
    printf("The value of '*p' is %d\n",*p);

    return 0;

}
