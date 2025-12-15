#include <stdio.h>
#include <stdlib.h>
int arr_display(int arr[], int n){

    for(int i=0;i<n;i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
int main() {
    int n;
    printf("enter size of arr: ");
    scanf("%d", &n);

    int* arr = (int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    arr_display(arr, n);    

    //we can use realloc() to reallocate size of arr
    int* arr2 = (int*)realloc(arr , sizeof(int)*10);
    //relloc(arr which has to be rellocated , new size);
    arr2[9] = 9;
    printf("arr2's 9th element is %d",  arr2[9]);
    free(arr);
    free(arr2);


    return 0;
}