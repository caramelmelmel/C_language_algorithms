#include<stdio.h>

int main(){
    int array[] = {11,13,17,19};
    int x;
    // use the pointer to access the array elements
    int *aptr;

    // the whole array itself is ref hence there is no need for a *
    aptr = array;

    for(x=0;x<4;x++){
        printf("Element %d: %d\n",x+1,*aptr);
        // inc by the sixe of the indiv variable, address of the next element in the code
        aptr++;
    }
    return 0;
}