#include <stdio.h>
#include <string.h>

void insertionsort(int arr[],int size){
 for (int i=1;i<size;i++){ //for all entries
        int j = i-1; //marks the previous entry
        int temp = arr[i]; //marks the arr[1]

        while(j>=0 && arr[j]>temp){ //if prev is bigger then
            arr[j+1]=arr[j]; //move the bigger to left
            j--;//decrease index and compare again till last index
        }
        //when control comes out of loop the larger numbers have shifted to right and vacant space is there
        arr[j+1]= temp;
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
    insertionsort(arr,size);
    printf("\n");
    printarr(arr,size);
    return 0;

}