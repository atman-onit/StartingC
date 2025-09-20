//we can generate pointers of other pointers
#include <stdio.h>

int main() {
        int a = 2;
        int* p_a = &a; //p_a is pointer of a, and contains memory address of a
        int** p_p_a = &p_a; //p_p_a is pointer of pointer a
        int*** p_p_p_a = &p_p_a; //p_p_p_a is pointer pointer to p_p_a's address

        printf("value of a is %d\n", a);
        printf("value of a is %d\n", *(p_a));
        printf("address of a is p_a = %p\n" , (void*)p_a);
        printf("address of pointer of a is p_p_a = %p\n" , (void*)p_p_a);
        printf("address of pointer of p_p_a is p_p_p_a = %p\n" , (void*)p_p_p_a);

    
    return 0;
}