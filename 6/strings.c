#include <stdio.h>

int main() {
    

    //therefore we can input strings with %s too.

    int size;
    printf("Enter size of string: ");
    scanf("%d", &size);

    char string2[size];
    printf("Enter string: ");
    scanf("%s", &string2);

    printf("%s", string2);

    return 0;
}