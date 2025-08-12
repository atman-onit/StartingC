#include <stdio.h>

int main() {
   // do while loop performs the function atleast 1 time then checks for validity of loop
   //program to run first n natural numbers; using do while
    int a, n=1;
    printf("To print N natural numbers; give value of N: ");
    scanf("%d" , &a);

   do {
    printf ("%d\n", n);
    n++;
   } while (n<=a);


    return 0;
}