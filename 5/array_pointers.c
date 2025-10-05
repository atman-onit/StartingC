#include <stdio.h>

int main() {
    // lets see how array pointers behave.

    int arr[4] = {1,2,3,4};
    //values 
    for (int i = 0 ; i<4 ; i++){
        printf("Value of element [%d] is: %d\n" , i , arr[i]);
    }

    //addresses
    int* arr_p = &arr;
    for (int i = 0 ; i<4 ; i++){
        printf("Address of element [%d] is: %u\n" , i , arr_p++);
    }

    //resetting
    arr_p = arr;
    arr_p++;

    //after incrementing
    for (int i = 0 ; i<4 ; i++){
        printf("Address of element [%d] is after incrementing: %u\n" , i , arr_p++);
    }

    printf("All the elements shifted to the next block; i.e. the address incremented by 1 block=4byte here");


    
    return 0;
}