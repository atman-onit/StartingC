#include <stdio.h>
#include <string.h>
struct dimensions {
    float x;
    float y;
    float z;
    char name[10];

};

int main() {
    struct dimensions s1;
    s1.x = 2;
    s1.y = 3;
    s1.z = 3;
    strcpy(s1.name, "Cuboid");
    struct dimensions* ptr; //declairing pointer to structure-dimensions
    ptr = &s1;//2nd pointer entering to s1
    int s1_x = (*ptr).x; //value of pointer = s1
    printf("s1.x is %d", s1_x);




    
    return 0;
}