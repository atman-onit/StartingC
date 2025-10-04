//lets see how many bytes does a different data type arrays takes.

#include <stdio.h>

int main() {
    //float array - 4bytes.
    float arr[5] = {1.0 , 2.0 , 3.5, 4.9 , 10.2};
    
    for (int i=0;i<5;i++){
        printf("element [%d] in float array is: %f\n" , i , arr[i]);
    }
    for (int i=0;i<5;i++){
        printf("Address of element [%d] in float array is: %u\n" , i , &arr[i]);
    }

    
    //char array
    char arr2[5] = {'A', 'B', 'c', 'D', 'E'};
    
    for (int i = 0; i < 5; i++) {
    printf("element [%d] in char array is: %c\n", i, arr2[i]);
    }
    for (int i = 0; i < 5; i++) {
    printf("Address of element [%d] in char array is: %u\n", i, &arr2[i]);
    }
    
    return 0;
}