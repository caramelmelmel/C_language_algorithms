/* we will program a 3 x 3 identity matrix
identity matrix:
100
010
001 */

#include <stdio.h>

int main(){
    //declare the datatypes of your variables 
    // it is always important to declare the size of your matrix here.
    int matrix[3][3];
    int row,col;
    //inititalise the array 
        // considerations to make:
            //where are the 0s and 1s of each row
            // do it systematically first for the rows then for the columns
            // take notice that one thing here is that the identity matrix is a diagonal matrix
            // Hence, the row and the col number is equal
            // we shorten the number of steps by using the if block 
    for(row=0;row<3;row+=1){
        for(col=0;col<3;col+=1){
            if(row == col){
                matrix[row][col] = 1;
            }
            else{
            matrix[row][col] = 0;
            }
        }
        
    }

    //display the grid
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            printf("%d",matrix[row][col]);
        }
        putchar('\n');
    }
}