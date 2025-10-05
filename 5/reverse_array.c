#include <stdio.h>

int main() {
    //lets try to reverse an array
    //to reverse we need to swap 0th index to the last index (size-1)
    //Mathematically; arr[r] ---> arr[size-r-1] and we need to repeat this step for r = {0 to size/2}

    int arr[6]={1,2,3,4,5,6};
    int arrev[6];
    //where size is 6.
    int size=6;

    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i=0;i<size;i++){
        
        arrev[i] = arr [size-1-i];
        
    }

    for(int i=0;i<size;i++){
        printf("%d ", arrev[i]);
    }
    printf("\n");


    

    
    return 0;
}