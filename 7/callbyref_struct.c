#include <stdio.h>
//lets write a code to change a vector to a null vector
typedef struct vector {
    float x;
    float y;
    float z;
}vec;

void print_vector(vec v){
    printf("vector is [%f %f %f] \n",v.x , v.y ,v.z);
}

void null_vec (vec* v){
    v->x = 0; // (*v).x = 0;
    v->y = 0;
    v->z = 0;

}

int main() {
    vec v1;
    v1.x = 2;
    v1.y = 3;
    v1.z = 5;
    print_vector(v1);

    vec* v1_p = &v1;
    printf("nulling vector ... \n");
    null_vec(v1_p);
    print_vector(v1);




    return 0;
}