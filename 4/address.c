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

    
    return 0;
}