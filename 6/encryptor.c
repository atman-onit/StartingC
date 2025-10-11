//program to encypt text file by incrementing ascii value of char.
#include <stdio.h>
#include <string.h>
char encrypt(char str[]){
    for (int i=0;i<strlen(str);i++){
        str[i]++;
    }
    printf("encrypted string is %s\n", str);
}

char decrypt(char str[]){
    for (int i=0;i<strlen(str);i++){
        str[i]--;
    }
    printf("decrypted string is %s\n", str);
}

int main() {
    char str[30];
    printf("Enter string(max 30 chars): ");
    scanf("%s" , &str);

    printf("string is %s\n", str);
    encrypt(str);
    decrypt(str);

    return 0;
}