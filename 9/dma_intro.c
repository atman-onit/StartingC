#include <stdio.h>
#include <stdlib.h> //dma ops comes in stdlib

int main() {
    //  malloc() - memory allocate function - gives asked memory in bytes
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);   
    //to make an array of size n we can't just declare => int arr[n];

    int* arr = (int*)malloc(n*sizeof(int)); 
    //(int*)malloc(4*n) = allocate memory (4bytes * n) as (int pointer) in int pointer named arr
    //we know one int needs 4 bytes - alternativerly we can use sizeof() function to get the size of 1 unit of memory it takes
    //now arr is a int pointer with 4bytes*n 

    //initial value is garbage

    for (int i =0;i<n;i++){
        printf("enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
   
    printf("%d %d" , arr[0] , arr[1]);
    free(arr); //free pointer of the space to avoid memory leaks


    return 0;
}