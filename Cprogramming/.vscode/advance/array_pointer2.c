#include<stdio.h>

int main(){
    char *presidents[5] = {
        "Washington",
        "Adams",
        "Jefferson",
        "Madison",
        "Monroe"
    };
    int x;
    char *ptr;

    // for loop moves through each pointer in the array 
    for(x=0;x<5;x++){

        // each pointer in the string 
        //stick with pointer notation
        //mem is stored in the president's variable, IT's IN THE LOCATION 
        //next arr element or base addr of nxt str
        ptr = *(presidents+x);
        while(*ptr !='\0'){
            putchar(*ptr);
            ptr++;
        }
        putchar('\n');

    }
    return 0;
}