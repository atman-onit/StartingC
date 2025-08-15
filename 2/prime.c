// to detect if given number is prime or not

#include <stdio.h>

int main()
{
    int n;
    printf("This program is to see if Number is prime or not\nEnter number: ");
    scanf("%d", &n);

    // logic: If a number is only divisible by 1 and itself then its a prime
    //  Note: 0 is not prime; 1 is not prime; 2 is Prime

    int prime;

    if (n <= 1){
        prime = 0;
    }

    else if(n > 1)
        {
            for (int i = 2; i < n; i++) {
                if (n%i==0 && n!=2){
                    prime = 0;
                    break;
                }

                else if (n%i!=0) {
                    prime = 1;
                }
            }
        }

    if (prime){
        printf("Number %d is prime", n);
    }
    else {
        printf("Number %d is not prime", n);
    }
      
    return 0;
}