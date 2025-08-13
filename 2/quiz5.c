#include <stdio.h>

int main() {
    int i=1, sum=0;
    do { 
        sum = sum + (8 * i);
        i++;
    } while (i<=10);
    printf("Sum of first 10 numbers in table of 8 is: %d" ,  sum);

    return 0;
}