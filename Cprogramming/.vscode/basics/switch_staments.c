//include the stdio header file, contains definitions and other standard routines
#include <stdio.h>

int main(){
    //puts("Help larh!");
    //puts("Thrilled to meet you!");
    //printf("hello world \nmy name is Mel");
    //printf("hello\nwhat's up\n\"dan\"\n ");
    int a;
    printf("Type an integer 1,2 or 3: ");
    scanf("%d",&a);
    switch(a){
        case 1:
            puts("Nice try");
            break;
        case 2:
            puts("Good");
            break;
        case 3:
            puts("God");
            break;
        default:
            puts("You blind or what?");
    }
    return 0;
}
