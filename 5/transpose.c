//for matrix A of order m x n and element Aij, transpose(A) will have elements [T(A)] of order n x m and element T(A)ji
#include <stdio.h>

int main() {
    int mat[3][3] = {1,2,3,4,5,6,7,8,9};
    //order 3x3
    int m = 3, n=3;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d" , mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                int temp;
                temp=mat[j][i];
                mat[j][i]=mat[i][j];
                mat[i][j]=temp;
                

            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d" , mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}