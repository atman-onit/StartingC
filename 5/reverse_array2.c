#include <stdio.h>
//generalising reversing array.
void revarray(int arr[],int size){
    for(int i=0;i<size/2;i++){
    int temp = arr[i];
    arr[i]=arr[size-1-i];
    arr[size-1-i]=temp;
    }
}

int main() {
    int size;
    printf("This program will reverse array; Enter size of array you want: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter Element [%d]: ", i);
        scanf("%d",&arr[i]);
    }
    printf("Your array is:-\n");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    //lets reverse elements in same array, for that we will use functions
    revarray(arr, size);
    printf("Your reversed array is:-\n");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}