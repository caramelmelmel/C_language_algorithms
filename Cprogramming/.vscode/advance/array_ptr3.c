#include<stdio.h>

int main(){
    int array[] = {11,13,17,19};
    int *aptr;

    aptr = array;
    //to access the second element onwards 
    aptr = &array[1];

    //ref only the first element
    printf("The element is %d\n",*aptr);

    return 0;
}