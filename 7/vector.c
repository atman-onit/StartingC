#include <stdio.h>

struct vector {
    float x;
    float y;
    float z;
};



int main() {
    struct vector v1;
    printf("enter vector's x component: ");
    scanf("%f", &v1.x);

    printf("enter vector's x component: ");
    scanf("%f", &v1.y);

    printf("enter vector's x component: ");
    scanf("%f", &v1.z);

    float vector_arr[3] = {v1.x , v1.y, v1.z};
    printf("vector's x, y, z components are: ");
    for(int i =0 ; i<3; i++){
        printf("%f ", vector_arr[i]);
    }



    


    
    return 0;
}