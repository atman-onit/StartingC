#include <stdio.h>

int main() {
    // lets access an array via its pointer.
    float arr[5] = {1.0 , 2.0 , 3.5, 4.9 , 10.2};
    float* arr_p = arr;

    for(int i=0;i<5;i++){
        printf("Value of element [%d] is: %f\n", i , *arr_p);
        arr_p++; //after each iteration pointer is incremented to the next block that in the array. and its value is printed.
    }

    return 0;
}