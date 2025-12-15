//program to create an array in heap
#include <stdio.h>

int main() {
    int* arr = (int*)malloc(6*sizeof(int));
    printf("enter all 6 elements of arr:- \n");
    scanf("%d %d %d %d %d %d", arr[0] , arr[1], arr[2], arr[3], arr[4], arr[5]);
    for (int i=0; i<6;i++){
        printf("arr[%d] = %d", i, arr[i]);
        
    }

    return 0;
}