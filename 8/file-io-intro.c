#include <stdio.h>

int main() {
    //intro to file handling
    FILE* ptr = fopen("FILE.txt", "r"); //to open a file. ptr -> file pointer
    int num;
    fscanf(ptr,"%d", &num); //scanning 1st int from ptr (file pointer)
    printf("%d\n", num);
    fscanf(ptr,"%d", &num); //scanning 2st int from ptr (file pointer)
    printf("%d", num);

    return 0;
}