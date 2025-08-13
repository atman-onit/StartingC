//program to calculate sum of first 10 numbers coming in the table of 8
#include <stdio.h>

int main() {
    int sum=0;
    for (int i =1;i<=10;i++) {
        sum = sum + (8*i);
    }
    printf("%d", sum);
    return 0;
}