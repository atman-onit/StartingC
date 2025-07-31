#include <stdio.h>

int main() {
    // code to print Hello world n times

    int n;
    printf("Enter the number of time you want the message to get displayed: ");
    scanf("%d" , &n);

    int i = 1;
    while (i <= n) {
        printf("HELLO WORLD- Iteration number %d \n" , i);
        i++ ;

    }
    return 0;
}