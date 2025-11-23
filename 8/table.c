//code to store table of a given numbber in a txt file.
#include <stdio.h>

int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    FILE* ptr = fopen("file2.txt", "w");
    fprintf(ptr, "Table of %d\n" , n);
    for(int i = 1;i<11;i++){
        fprintf(ptr, "%d x %d = %d\n", n , i, n*i);
    }
    fclose(ptr);
    printf("Executed! Table of %d is printed in file2.txt! ", n);

    
    return 0;
}