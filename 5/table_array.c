//code to contain table of 2, 3, 4 in array
#include <stdio.h>

int main() {
    int arr[3][10];
    int mul[3]={2,3,4};
    for(int i=0; i<3; i++){
        for(int j=0; j<10;j++){
            arr [i][j] = mul[i] * (j+1) ;
        }

     for(int i=0; i<3; i++){
        for(int j=0; j<10;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

    }
    
    return 0;
}