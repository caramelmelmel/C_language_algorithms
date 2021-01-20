// this time round we use the ctype.h library
// tolower() and toupper() over here comes from the ctype.h 
#include<stdio.h>
#include<ctype.h>

int main(){
    // int variable type is preferred over char to catch file errors when reading from a file
    // characters are numbers that are tiny in display 
    int ch = 'a';
    
    printf("Original %c\n",ch);
    printf("Lowercase %c\n",tolower(ch));
    printf("Uppercase %c\n",toupper(ch));
    printf("Original %c\n",ch);
     }