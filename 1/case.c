#include <stdio.h>

int main() {
    char a;
    printf("Enter Letter: ");
    scanf("%c",&a);

    if (a >= 65 && a<=90) {
        printf("Letter is upper case");
    }
    else if (a >= 97 && a <= 122) {
        printf("Letter is lower case");
    }

    return 0;
}