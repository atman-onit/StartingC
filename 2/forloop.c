//sytax: for (define loop for a variable;condition which gets checked after iteration;change after each iteration) { function which will get looped};
//code to print first N natural numbers

#include <stdio.h>

int main() {
    int a, n=1;
    printf("Program to print N natural numbers, Enter value of N: ");
    scanf("%d" , &a);

    for(n ; n<=a ; n++) {
        printf("%d \n" , n);
    }
    return 0;
}