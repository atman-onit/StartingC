//program to show force exerted by earth on object

#include <stdio.h>

float force (float);
float force(float M){
    return 9.8 * M;
}
int main() {
    float M;
    printf("Enter Mass of object (in kg): ");
    scanf("%f",&M);
    printf("Force exerted on object by earth is %f Newtons " , force(M));
    return 0;
}