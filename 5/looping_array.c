#include <stdio.h>

int main() {
    // we can input and print out elements of an array using loops

    int array[3];
    for (int i=0;i<3;i++){
        printf("Enter %d element  of array: ", i);
        scanf("%d" , &array[i]);
    }
    for (int i=0; i<3;i++){
        printf("The element number %d is %d\n", i, array[i]);
    }
    
    return 0;
}