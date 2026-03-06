#include <stdio.h>
#include <string.h>

void bubblesort(int arr[],int size){
 for (int i=0;i<size;i++){ //for all entries
        for(int j=0;j<size-i-1;j++){//for each iteration
            if(arr[j]>arr[j+1]){ //swap if left one is bigger than the right
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }//largest number is bubbled out to the end.
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
    bubblesort(arr,size);
    printf("\n");
    printarr(arr,size);
    return 0;

}