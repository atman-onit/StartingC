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
    int size;
    printf("This program is to determine and print positive elements from an array;\nENTER SIZE OF THE ARRAY: ");
    scanf("%d" , &size);
    
    int arr[size];
    printf("Enter array:- ");
    for(int i=0;i<size;i++){
        printf("Element %d: " , i);
        scanf("%d" , &arr[i]);
    }
    printf("Array is:-\n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\nNumber of POSITIVE elements are: %d" , positivearr(arr, size));
    return 0;
}