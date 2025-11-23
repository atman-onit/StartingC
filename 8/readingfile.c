#include <stdio.h>

int main() {
    FILE* ptr = fopen("FILE.txt", "r");
    while(ptr){
        char ch = getc(ptr);
        printf("%c", ch);

        if (ch == EOF){
            break;
        }
    }

    return 0;
}