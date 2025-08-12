//program to give table of any number N till N x 20
#include <stdio.h>

int main() {
    int a, i=1;
    printf("Enter number: ");
    scanf("%d", &a);
    
    for (i ; i<=10; i++ ){
    printf("%d x %d = %d\n" , a , i , a * i);
    }
       
    
}