#include <stdio.h>

int main(){
    float price,*ptr;
    //btr init the pointer var or else ur program will stop running!
    ptr = &price;
    *ptr = 99.98;

    printf("The price is $%.2f\n",price);

    return 0;
}