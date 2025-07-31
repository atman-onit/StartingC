#include <stdio.h>

int main() {
    printf("ASCII Table (0 to 127)\n");
    printf("----------------------\n");
    printf("Char\tASCII\n");

    for(int i = 0; i <= 127; i++) {
        // For non-printable characters, print a placeholder
        if(i < 32 || i == 127)
            printf("N/A\t%d\n", i);
        else
            printf("%c\t%d\n", i, i);
    }

    return 0;
}
