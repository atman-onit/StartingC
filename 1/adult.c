#include <stdio.h>

int main() {
    int age;
    printf ("enter ur age: ");
    scanf("%d",&age);
    
    age>18?printf("You are adult"):printf("you are minor");
    // condition?Code if true:code if false;
    return 0;
}

