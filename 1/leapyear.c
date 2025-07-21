#include <stdio.h>

int main() {
    int year;
    printf("ENter year: ");
    scanf("%d",&year);

    year%4==0?printf("Its a leap year"):printf("Its not a leap year");

    return 0;
}