#include <stdio.h>

void sum(int a,int b) {
    int sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
}

void avg(int a, int b) {
    float avg = (a + b)/2.0;
    printf("Average of %d and %d is %f" , a , b , avg);
}
int main() {
    int a = 2, b = 3;
    sum(a,b); 
    avg(a,b);

    return 0;
}