#include <stdio.h>

int main() {
    //diving in logic operators.
    int a, b;
    
    printf("enter number 1: (Either 1 or 0): \n");
    scanf("%d",&a);

    printf("enter number 2: (Either 1 or 0): \n");
    scanf("%d",&b);
    
        
    printf("The value of NOT(a) and NOT(b) is %d and %d respectively \n" , !a , !b);
    printf("The value of a AND b is: %d \n", a&&b );
    printf("The value of a OR b is %d \n", a || b);
    
    //based on AND, NOT, OR Logic gates 
    return 0;
}