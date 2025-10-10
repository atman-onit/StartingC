//making my own version of strlen function
#include <stdio.h>
#include <string.h>

int mystrlen(char str[]){
    int i=0;
    char c;
    while(c != '\0'){
        c = str[i];
        i++;
    }
    int count = i-1;
    return count;
}

int main() {
    char str[] = "hello";
    printf("String is %s\n" , str);
    printf("strlen is: %d\n", strlen(str));
    printf("My string length function's strlen is= %d" , mystrlen(str));

    
    return 0;
}