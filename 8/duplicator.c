#include <stdio.h>

int main() {

    FILE* ptr0 = fopen("FILE.txt", "r");
    FILE* ptr  = fopen("duplicated.txt", "w");
    fprintf(ptr, "DUPLICATING....\n");

    if(ptr0 == NULL || ptr == NULL){
        printf("File opening failed");
        return 1;
    }

    int ch;

    while((ch = fgetc(ptr0)) != EOF){
        fputc(ch, ptr);
    }

    printf("Duplication succeeded. Check duplicated.txt");

    fclose(ptr0);
    fclose(ptr);

    return 0;
}