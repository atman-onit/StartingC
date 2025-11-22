//arr of complex numbers

#include <stdio.h>
typedef struct complex_no{
    float real;
    float imaginary;
} complex ;

void display (complex z[] , int i){
   float a = z[i].real;
   float b = z[i].imaginary;
    printf("Number is (%f + %fi) \n", a , b);
}

int main() {
    complex z1[5];
    for(int i=0;i<5;i++){
        printf("Enter real and imaginary parts of number %d: ", i+1);
        scanf("%f %f", &z1[i].real , &z1[i].imaginary);
    }
    for(int i=0;i<5;i++){
        printf("Number %d is: " , i+1);
        display(z1, i);
    }

    
    return 0;
}