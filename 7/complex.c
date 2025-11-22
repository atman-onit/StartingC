#include <stdio.h>
typedef struct complex_no{
    float real;
    float imaginary;
} complex ;

int main() {
    complex z1;
    printf("Enter real part of the number:");
    scanf("%f" , &z1.real);

    printf("Enter imaginary part: ");
    scanf("%f" , &z1.imaginary);

    printf("Number is: %f + %fi", z1.real , z1.imaginary);
    



    return 0;
}