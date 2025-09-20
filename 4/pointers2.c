#include <stdio.h>

int main() {
    int a = 4;
    int* p_a = &a; //p_a is int pointer pointing to a/ has a's address
    printf("value of a is %d\n" , a);
    printf("address of a is %p in hexadecimal \nand %u in decimal\n", p_a, &a);

    /*
    in &a -- & is called "address of" operator
    to print the value in the address a pointer is pointing to 
    we use 
    *(pointer) -- therefore * is called "value of" operator
    or
    *(&variable) = *(pointer pointing to a)
    */
    printf("Value of a is %d\n" , *p_a);
    printf("value of a is %d\n" , *(&a));
    //similarly
    printf("address of a is %p\n" , &(*(&a)) );
    return 0;
    
}