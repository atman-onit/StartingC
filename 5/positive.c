#include <stdio.h>
int positivearr (int arr[], int size){
    int count=0;
    for(int i=0;i<size;i++){
        if (arr[i]>0){
            count++; 
        }
    }
    return count;
}
int main() {
    int arr[8] = {1 , -1 , 2 , -2 , 3 , -3 , -4 , -8};    
    int size = 8;
    printf("Array is:-\n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\nNumber of POSITIVE elements are: %d" , positivearr(arr, 8));
    return 0;
}