//program to sum first n natural numbers using recursion 

// S(n) = 1 + 2 + 3 + 4 ..  + (n-1) + n
// S(n-1) = 1 + 2 + 3 + 4 ..  + (n-1)
// S(n)=S(n-1)+ n

#include <stdio.h>
int sum(int);
int sum(int n){
    if (n==0){
        return 0; //base case
    }
    return sum(n-1) + n;
}
int main() {
   int n;
   printf("Program to sum first n natural numbers; enter n: ");
   scanf("%d" , &n);

   printf("Sum of first %d natural numbers is %d" , n , sum(n));
    
    return 0;
}