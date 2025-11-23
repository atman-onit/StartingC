#include <stdio.h>

int main() {
    FILE* ptr = fopen("FILE.txt", "r");
    while(1){
        char ch = getc(ptr); //getc gets the char from file and proceeds to next if ran again.
        printf("%c", ch);

        if (ch == EOF){
            break;
        }
    }
    fclose(ptr);
    return 0;
}