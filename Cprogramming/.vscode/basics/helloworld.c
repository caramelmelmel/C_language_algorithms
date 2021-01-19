// it is always important to declare the datatype of what you are returning for each function
//in this case we declare with int 
int main(){
    int a = 5;

    //you can also fiddle with a float to deal with your decimal points
    float b = 3.0;

    //for string datatypes like character must be declared as an array 
    char password[] = "spatula";
    //it is also possible to specify the length of the string
    char pwd[8] = "lololol1";
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    //prompts the user for a good input also other than its output to the terminal
    printf("hello world\n");
    // you can also use scan or put to get to the terminal
    //strings 
    //scanf is used to read things from the keyboard which means user input
    //scanf("%d", a);
    //scanf("%d help me", b);

    return 0;
}