#include <stdio.h>

/*
Program to create pattern like :-
.
...
.....
.......

(first n times)
For nth line: 2n+1 * s
*/



int main() {
    int n;
    printf("Enter number of levels you want in pattern: ");
    scanf("%d" , &n);

    for (int i=0; i<= 2*n+1 ;i++){
        printf("*");
    }
    printf("\n");
    return 0;
}