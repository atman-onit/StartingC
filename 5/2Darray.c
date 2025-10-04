//we can also make 2d arrays (matrices)
#include <stdio.h>

int main() {
    int twod_array[2][2] = {{2, 3}, 
                            {3, 3}};
                            //the array is broken down into a 1d array where each element gets mapped
//int twod_array[2][2] signifies that the 2d matrix is of order 2x2 i.e 2 column by 2 row = 4 elements.
//elements are categorized by their position in the matrix: for 2 in the abover matrix, its position will be twod_array[0][0]

//lets print the matrix.
for (int i=0; i<2 ; i++){
    for (int j=0; j<2;j++){
        printf("The element [%d][%d] is %d\n", i, j, twod_array[i][j]);
    }
}

    return 0;
}