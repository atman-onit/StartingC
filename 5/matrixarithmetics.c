#include <stdio.h>
void addmat(int a, int b, int m1[a][b], int m2[a][b], int m3[a][b]){
    for (int i=0;i<a; i++){
        for(int j=0;j<b;j++){
             m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}
void submat(int a, int b, int m1[a][b], int m2[a][b], int m3[a][b]){
    for (int i=0;i<a; i++){
        for(int j=0;j<b;j++){
             m3[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

int matorder(int a_max, int b_max,int m[a_max][b_max]){
    int row=0,col=0;
    for(int i=0;i<a_max;i++){
    
        if(&m[i][0]==NULL){
            col= --i; 
            continue;       
        }
    }
    for(int i=0;i<a_max;i++){
        if(&m[0][i]==NULL){
            row = --i;  
            continue;      
    }
    }
    return row,col;
}
int main() {
    int m1[10][10]= {{1,2,3} , {4,5,6}};
    int m2[10][10]= {{1,2,3} , {4,5,6}};
    printf("\"%d\" x \"%d\"", matorder(10,10,m1));

    

    return 0;
}