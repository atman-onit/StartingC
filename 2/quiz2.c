//program to calculate sum of first N natural numbers.
#include <stdio.h>

int main() {
    int n, sum=0;
    printf("Program to sum first N natural numbers; Enter N: ");
    scanf("%d", &n);
    
    for (int i=1;i<=n;i++) {
        sum = sum + i;
    }
    printf("%d", sum);

        
    
    return 0;
}