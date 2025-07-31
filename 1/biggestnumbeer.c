#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter Digit A: ");
    scanf("%d" , &a);
    

    printf("Enter Digit B: ");
    scanf("%d" , &b);
    
    printf("Enter Digit C: ");
    scanf("%d" , &c);
   

    if (a>b && a>c){
        printf("a - %d is the largest number" , a);
    }

    else if (b>a && b>c){
        printf("b - %d is the largest number" , b);
    }
    else if (c>a && b<c){
        printf("c - %d is the largest number" , c);
    }


    return 0;
}