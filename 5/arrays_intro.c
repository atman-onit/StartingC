#include <stdio.h>

int main() {
    //an array is a list of elements, allows a single variable to store multiple values
    //an array is initialised by syntax : eg: *var type* *name* [value(no. of elements in it)];
    // values range from 0 to ([box value] - 1)

    int array [3];
    array [0] = 1;
    array [1] = 2;
    array [2] = 3;

    // we can declare elements like this, element 0 is the 1st and element (n-1) is last.
    //we can print elements by using name of the array element.

    printf("1ST VALUE OF ARRAY IS %d\n", array [0]);
    printf("1ST VALUE OF ARRAY IS %d\n", array [1]);
    printf("1ST VALUE OF ARRAY IS %d\n", array [2]);

    // we can also declare values of an array directly 
    int list[3] = {1,2,3};
    printf("Array list is %d" , list[0]);
    return 0;

}