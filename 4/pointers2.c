#include <stdio.h>

int main() {
    int a = 4;
    int* p_a = &a; //p_a is int pointer pointing to a/ has a's address
    printf("value of a is %d" , a);
    printf("address of a is %p in hexadecimal and %u in decimal", p_a, &a);
    return 0;
}