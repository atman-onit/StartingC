#include <stdio.h>
#include <string.h>

void selectionsort(int arr[],int size){
 for (int i=0;i<size;i++){ //for all entries

        int smallest_index=i; //marks arr[0] of US arr
         
        for(int j=i+1;j<size;j++){//for each iteration
            if(arr[smallest_index]>arr[j]){ //compares all entries one by one to the smallest 
                smallest_index = j; // when finds an entry bigger than int the smallest then resets the smallest
            }
        }
        int temp = arr[smallest_index] ; //brings the smallest entry forward
        arr[smallest_index]= arr[i];
        arr[i]=temp;
        }
    }


void printarr(int arr[], int size){
    for (int i = 0; i<size; i++){
        printf("%d ", arr[i]);
        
    }
}
int main() {
    int arr[5] = {2,5,1,6,3};
    int size = 5;
    printarr(arr,size);
    printf("\n");
    selectionsort(arr,size);
    printf("\n");
    printarr(arr,size);
    return 0;

}