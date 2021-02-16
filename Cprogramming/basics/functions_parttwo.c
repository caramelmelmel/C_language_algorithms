#include <stdio.h>

// remember to declare before the main function 
// don't need to prototype 
//another way of declaring the function
void soup(void){
    puts("soup\n");
}

int main(){
    printf("For breakfast I had ");
    soup();
    printf("For lunch I had ");
    soup();
    printf("For dinner I had ");
    soup();
    return 0;
}