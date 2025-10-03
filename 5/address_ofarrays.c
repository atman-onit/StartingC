#include <stdio.h>

int main() {

    int array[3];

    for (int i=0;i<3;i++){
        printf("Enter element %d of array: ", i); 
        scanf("%d" , &array[i]);
    }
    for (int i=0; i<3;i++){
        printf("The element number %d is %d\n", i, array[i]);
    }
    //we can print address of array's each element too
    for (int i=0; i<3;i++){
        printf("The address of element number %d is %p in hexdec\n ", i, &array[i]);
    }
    for (int i=0; i<3;i++){
        printf("The address of element number %d is %u in decimal\n", i, &array[i]);

    }
    printf("Notice how the address differs by 4byte;\n thats cz 1 integer element is contained in a box of size 4bytes.\nThe memory addresses are continues blocks.");
    return 0;
}