#include <stdio.h>
#include <string.h>

int main() {

    char str1[6];
    printf("Enter string 1:- \n");
    scanf("%s" , &str1 );

    char str2[6];
    printf("Enter string 2\n");

    for (int i=0; i<6;i++){
        scanf("%c" , &str2[i]);
    }
    printf("String 1 is %s\n", str1);

    printf("String 2 is: ");
    for(int i=0;i<6;i++){
        printf("%c", str2[i] );
        fflush(stdin);
    }
    printf("\nstrlen(str1)= %d\n",strlen(str1));
    printf("strlen(str2)= %d",strlen(str2));
    return 0;
}