//code to count occurence of a char in a string.
#include <stdio.h>
#include <string.h>

int counter(char str[], char c){
    int count=0;
    int len = strlen(str);
    for(int i=0; i<len;i++){
        if (str[i] == c){
            count++;
        }
    }
    
    return count;
}

int main() {

    char str[30];
    printf("Enter string(max 30 chars): ");
    scanf("%s" , &str);

    char c;
    printf("Enter the char you wanna count: ");
    scanf(" %c", &c);

    printf("%c appeared %d times in %s", c, counter(str,c), str);


    
    return 0;
}