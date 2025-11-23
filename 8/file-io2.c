#include <stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("FILE.txt", "r");

    if (ptr == NULL){
        printf("Invalid file");
    }
    else {
        // to open a file. ptr -> file pointer
        int num;
        fscanf(ptr, "%d", &num); // scanning 1st int from ptr (file pointer)
        printf("%d\n", num);
        fscanf(ptr, "%d", &num); // scanning 2st int from ptr (file pointer)
        printf("%d", num);

        fclose(ptr); //always close a file after opening it once reading is done
    }

    return 0;
}