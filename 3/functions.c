//intro to functions

    //syntax: Function protoype: int name (valriable type , variable type , variable type...);
            /*Function definition: int name (variable 1, variable 2, var 3....){
                                    code which will get excuted
                                    }

            */

// making a function to sum 2 integers


#include <stdio.h>

int sum (int , int); //function prototype
int sum (int x, int y) {
    printf("Sum is %d", x + y);
}
int main() {
int a=2, b=2;
sum (a,b);

    return 0;
}