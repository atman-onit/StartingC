//typedef operator can define a alias/name for a variable type which can be used to reference the variable

#include <stdio.h>


int main() {
    int a = 2;
    //or
    typedef int num; //num is now an alias to int
    num b = 2;


    //we can use this to rename structures too

    struct vector {
        int xcomp;
        int ycomp;
        int zcomp;
    };

    struct vector v1; 
    v1.xcomp = 2;
    v1.ycomp = 3;
    v1.zcomp = 0;

    printf("vector v1 has components %d , %d and %d\n", v1.xcomp, v1.ycomp, v1.zcomp);


//this is a long process we can shorten the code using type def while defining the struct
    typedef struct coordinates {
        int x;
        int y;
        int z;
    } point; //we set point as an alias to struct coordinates

    point p1; //we can use point instead of writing struct coordinates
    p1.x = 1;
    p1.y = 2;
    p1.z = 3;
    printf("coordinates of p1 are %d , %d and %d\n", p1.x, p1.y, p1.z);



    

    
    return 0;
}