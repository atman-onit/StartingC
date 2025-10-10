#include <stdio.h>
#include <string.h>

char* slice(char str[], int m, int n) {
    static char result[100];  // static so it persists after function ends
    int j = 0;

    for (int i = m; i < n && str[i] != '\0'; i++, j++) {
        result[j] = str[i];
    }
    
    return result;
}

int main() {
    char str[] = "helloboi";
    int m, n;

    printf("Slicing string; enter starting point as a digit: ");
    scanf("%d", &m);

    printf("Enter ending point: ");
    scanf("%d", &n);

    char *sliced = slice(str, m, n);
    printf("Sliced string is %s\n", sliced);

    return 0;
}