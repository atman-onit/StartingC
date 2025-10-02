//program to change a variable to ts 10x
#include <stdio.h>

int ten_x(int* a) {
    printf("Value of a is %d in ten_x funciton\n" , *a);
    printf("Address of a is %p in ten_x funciton\n" , a);
    printf("The 10x value of a is %d\n" , *a * 10); //returns 'value' in address a * 10
}
int main() {
    int a = 2;
    printf("Value of a is %d in MAIN\n" , a);
    printf("Address of a is %p in MAIN\n" , &a);
    ten_x(&a); //ten_x(&a) sends address of a to ten_x function
     

    
    return 0;
}