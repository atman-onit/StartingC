//to make a function to calculate simple interest

#include <stdio.h>

int SI(int,int,int);
int SI(int p, int t, int r){
    printf("Simple interest is %d\n", (p * t * r) /100 );
    printf("Total amount to payback: %d", p + ((p*r*t)/100));

}
int main() {
    int p, t, r;
    printf("Enter Amount: ");
    scanf("%d", &p);

    printf("Enter time: ");
    scanf("%d", &t);

    printf("Enter rate: ");
    scanf("%d", &r);

    SI(p ,t ,r);

    return 0;
}