#include <stdio.h>
#include <string.h>
struct dimensions {
    int x;
    int y;
    int z;
    char name[10];

};

int main() {
    struct dimensions s1, s2;
    s1.x = 2;
    s1.y = 3;
    s1.z = 3;
    strcpy(s1.name, "Cuboid"); 

    s2.x = 4;
    s2.y = 4;
    s2.z = 4;
    strcpy(s1.name, "cube"); 

    printf("s1 is: %d, %d, %d\n", s1.x,s1.y,s1.z);
    printf("s1 is: %d, %d, %d\n", s2.x,s2.y,s2.z);

    struct dimensions* ptr1 = &s1; //declairing pointer to structure-dimensions
    struct dimensions* ptr2 = &s2;//2nd pointer entering to s1

    int s1_x = (*ptr1).x; //value of pointer = s1 
    int s2_x = (*ptr2).x;
    printf("s1.x is %d\n", s1_x);
    printf("s2.x is %d\n", s2_x);
    
    //we can also use -> (arrow operator)
    int s1_y = ptr1->y;
    printf("s1.y is %d\n", s1_y);
    int s2_y = ptr2->y;
    printf("s2.y is %d\n", s2_y);
    printf("s1.z and s2.z are %d and %d respectively\n", ptr1->z , ptr2->z);


    
    return 0;
}