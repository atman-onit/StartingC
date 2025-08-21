//recursion is when a function is called by itself in it.
    //factorial is recursive in nature; n! = 1 x 2 x 3 x ...... (n-1) x n
    //                                (n-1)! = 1 x 2 x 3 x ...... (n-1) 
    //                                 n! = n x (n-1)!

#include <stdio.h>
int factorial(int);
int factorial(int n){
        //note we dont want n-1 going to 0 and negative after that.
        //0! = 1! = 1
      //base condition
        if (n==0 || n==1){
            return 1;
        }
        return factorial (n-1) * n;
        
    }
int main() {
    
    int n;
    printf("This program is to print factorial of n; give n: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d", n , factorial(n));
  
    return 0;
}