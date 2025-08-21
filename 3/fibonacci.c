#include <stdio.h>
/*
programming to print nth element in fibonacci sequence

rule:  where n is n'th element; F(n) = F(n-1) + F(n-2) 
BASE CASES: F(0)= 0 ; f(1) = 1 
F(2) = f(1) + f(0) = 1 + 0 = 1 
F(3) = f(2) +f(1) = 1 + 1 =2
F(4) = f(3) + f(2) = 1 + 1 = 3 */

int fibo(int);
int fibo(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else {
        return fibo(n-1) + fibo (n-2);
    }

}
int main() {
    int n;
    printf("This program is to give nth element of fibonacci sequence; Give N: ");
    scanf("%d" , &n);
    printf("Element number %d is %d in the sequence" , n , fibo(n));

    
    return 0;
}