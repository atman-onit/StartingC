//making my own version of string copy

#include <stdio.h>
#include <string.h>

void mystrcpy(char target[], char source[]) {
    int i;
    for (i=0; source[i]!='\0';i++){
        target[i] = source[i];
    }
    target[i] = '\0' ;
}

int main() {
    char str[] = "helloboi";
    char target[10];
    mystrcpy(target,str);
    printf("%s", target);

    return 0;
}