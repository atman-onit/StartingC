//lets use pointer arithmetic on an array.
#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //lets print their addresses
    for(int i=0;i<10;i++){
        printf("Address of element [%d] is: %u\n", i, &arr[i]);
    }
    printf("4 byte interval as block of 4bytes are given to one element\n");

    //we can also access an array via its pointer.
    int* arr_p = &arr; 
    printf("address of arr is %u\n", arr_p);
    //Notice how pointer of array arr is pointer of its 1st element.\n We can use indexing to find values of other elements in an array if we have the pointer of its 0th element.

    for (int i = 0; i<10 ; i++){
        printf("Address of element [%d] is: %u\n", i, arr_p);
        arr_p++;
    }



    return 0;
}