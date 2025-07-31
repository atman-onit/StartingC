#include <stdio.h>

int main() {
    // code to print Hello world n times

    int n;
    printf("Enter the number of time you want the message to get displayed \nBetween 1 to 20: ");
    scanf("%d" , &n);

    int i = 1;

    if (i <=20) {
        
    while (i <= n) {
        printf("HELLO WORLD- Iteration number %d \n" , i);
        i++ ;

    }
}
    else if (i >20) {
        printf("The number has to be between 1 and 20");
    }
    return 0;
}