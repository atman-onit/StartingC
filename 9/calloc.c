//calloc() is same as malloc() - it just allocated continuous memory and syntax is different
//arr = (int*)calloc(n,size of one block);
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

    //initial value is set to 0 in calloc

    int* arr = (int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    arr_display(arr, n);    

    free(arr);

    return 0;
}