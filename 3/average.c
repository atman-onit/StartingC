#include <stdio.h>

int average(int,int,int);
int average(int a, int b, int c){
    printf("Their average is %d" , (a+b+c)/3);
}
int main() {
    int a,b,c;

    printf("Enter Number 1:");
    scanf("%d",&a);

    printf("Enter Number 2:");
    scanf("%d",&b);

    printf("Enter Number 3:");
    scanf("%d",&c);

    average(a, b, c);


    return 0;
}