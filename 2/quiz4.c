#include <stdio.h>

int main() {
    int i =1, sum=0;
    while (i<=10) {
        sum = sum + (8*i);
        i++;
    }
    printf("%d", sum);
    return 0;
}