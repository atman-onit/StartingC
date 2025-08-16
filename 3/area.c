#include <stdio.h>

    int area(int a, int b){
        printf("Area is %d", a * b);
    
    }

    int main() {
    int a, b;
    printf("Enter Input 1: ");
        scanf("%d", &a);

    printf("Enter input 2: ");
        scanf("%d", &b);    
    area (a, b);

    

    return 0;
}