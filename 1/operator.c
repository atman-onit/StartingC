#include <stdio.h>

int main() {
    
     int a, b;
     printf("Enter the value of 1st number: \n");
     scanf("%d" , &a);
     printf("Enter the value of 2nd number: \n");
     scanf("%d" , &b);
     

     printf("sum is %d,\n difference is %d, \n product is %d,\n quotient is %d\n", a + b, a - b, a * b, a / b);
    
     return 0;
}