#include <stdio.h>

int main() {
    FILE* ptr = fopen ("FILE.txt", "w");
    int num = 22;
    char ch[] = "This line is written from control in writing mode" ;
    
    fprintf(ptr, "%d\n" , num);
    fprintf(ptr, "%s" , ch);
    fclose(ptr);
    

    return 0;
}