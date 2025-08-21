#include <stdio.h>

float average(int,int,int);
float average(int a, int b, int c){
    printf("Their average is %f" , (a+b+c)/3);
}
int main() {
    float a,b,c;

    printf("Enter Number 1:");
    scanf("%f",&a);

    printf("Enter Number 2:");
    scanf("%f",&b);

    printf("Enter Number 3:");
    scanf("%f",&c);

    average(a, b, c);


    return 0;
}