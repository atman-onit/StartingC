#include <stdio.h>
void areaperi(float r, float* a, float* p){
    //we have pointers a and p, and will store value in them acc to r
    *a = r * r * 3.14;
    *p = 2 * 3.14 * r;
}

int main() {
    float r, area, perimeter;
    printf("enter r: ");
    scanf("%f", &r);
    areaperi(r , &area, &perimeter);
    printf("Area is %f and perimeter is %f", area, perimeter);



    return 0;
}