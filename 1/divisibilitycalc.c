#include <stdio.h>

int main() {
    int a;
    printf("Enter Number A which is to be checked for divisibility \n");
    scanf("%d" , &a);

    int b ;
    printf("Enter number to see if number A is divisble by it or not \n ");
    scanf("%d", &b);

    int c = a % b;

    if (c==0) {
        printf("Its is divisible!");
    }

    else {
        printf("It is not divisble and the remainder is %d" , c);
    }

    
    return 0;
}