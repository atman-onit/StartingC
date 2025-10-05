//program to store table of any number.

#include <stdio.h>

int main() {
    int x;
    printf("Enter Number who table you want: ");
    scanf("%d", &x);

    int table[10];

    for(int i=0;i<10;i++){
        table[i] = x*(i+1);
    }

    printf("Table of %d is:-\n", x);

    for(int i=0;i<10;i++){
        printf("%d\n", table[i]);
    }
    return 0;
}