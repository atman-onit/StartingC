#include <stdio.h>

typedef struct vector {
    float x;
    float y;
    float z;
}vec;
void vecsum (vec vec1, vec vec2){
    static vec sumvec;
    sumvec.x = vec1.x + vec2.x ; 
    sumvec.y = vec1.y + vec2.y ; 
    sumvec.z = vec1.z + vec2.z ; 

    
    printf("Sum of v1 and v2 is v3 = [%f %f %f] - x y z components", sumvec.x, sumvec.y, sumvec.z);


}

int main() {
    vec v1, v2;
    printf("enter V1 vector's x , y, z component: ");
    scanf(" %f %f %f", &v1.x , &v1.y , &v1.z);
    

    printf("enter V2 vector's x, y, z component: ");
    scanf("  %f %f %f", &v2.x , &v2.y , &v2.z);
  

    vecsum(v1, v2);

    return 0;
}