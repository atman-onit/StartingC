//lets try to print address of a variable from main and from a seperate function; will it be the same?
#include <stdio.h>
int* address(int a){
    int* p_a = &a;
    return p_a ;
}
int main() {
    int a =3;
    printf("Address of a from main fn is %p\n" , &a);
    printf("Address of a from address function is %p\n", address(a));
    /*
    prints different address as-  when vairable is declared in main, its memory is in main's stack; so is the address
    when address function call int a; a value of a is passed in the address function's stack and so the address of memory is different.
    */
    return 0;
}