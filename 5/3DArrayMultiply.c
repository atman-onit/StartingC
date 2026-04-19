#include <stdio.h>

void matmul(int a, int b, int d, int m1[a][b], int m2[b][d], int m3[a][d]){
    
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            for(int k=0;k<b;k++){
            m3[i][j] =+ m1[i][k]*m2[k][j];
            }
        }
    }
}
int main(){

    // for Matrix mul-
    int m1 [2][2] = {1,2,3,4};
    int m2 [2][2] = {1,2,3,4};
    int m3[2][2];
    printf("M1 : \n");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
    printf("M2 : \n");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }
    printf("M1 x M2 : \n");
    matmul(2,2,2,m1,m2,m3);
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}

