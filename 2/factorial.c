#include <stdio.h>

int main() {
    int n, factorial=1 ;
    printf("This program is to print n! *factorial* \nEnter n: ");
    scanf("%d", &n);

    for (int a=1;a<=n;a++){
        factorial = factorial * a ; 
    }
    printf("Factorial is %d" , factorial);
    return 0;
}