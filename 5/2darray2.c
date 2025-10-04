#include <stdio.h>

int main() {
    // code to input 2d array from user.
    int m,n;
    printf("This code is to print matrix/2d array of order MxN; Enter number of colomns: ");
    scanf("%d", &m);
    printf("Enter Number of rows: ");
    scanf("%d" , &n);

    int twodarray [m][n];
    for(int i = 0;i<m;i++){
        for (int j= 0; j<n; j++){
            printf("Enter element [%d][%d]: ", i ,j);
            scanf("%d" , &twodarray[i][j]);
        }
    }
    for(int i = 0;i<m;i++){
        for (int j= 0; j<n; j++){
            printf("Element [%d][%d] is: %d\n", i ,j , twodarray[i][j]);
        }
    }
    //lets see the addresses of all the elements.
    for(int i = 0;i<m;i++){
        for (int j= 0; j<n; j++){
            printf("Address of element [%d][%d] is: %u\n", i ,j , &twodarray[i][j]);
        }
    }
    return 0;
}