#include<stdio.h>

int main(){
    char *months[12] ={
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int x;
    for(x=0;x<12;x++){
        printf("%s\n",months[x]);
        //displays memory location of each element in the array 
        // each memory location references a string 
        printf("%p\n",months[x]);
    }
    return 0;
}