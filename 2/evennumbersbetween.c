#include <stdio.h>

int main() {
    int a , b;
    printf("This program is to find even numbers between 2 digits \nEnter number 1: ");
    scanf("%d" , &a);

    printf("Enter number 2: ");
    scanf("%d" , &b);

    int c = a + 1;
    while (a <= b && c <= b) {
       if (a % 2 == 0) {
        printf("%d \n" , a);
        a +=2 ;
       }
       
       else if (a % 2 == 1) {
        printf("%d\n" , c);
        c+=2;

       }
    }
    return 0;
}