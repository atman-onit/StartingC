#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";
    printf("string str is %s\n", str);
    printf("Size of string is %d\n", strlen(str)); //strlen() prints string length
    
    printf("\n"); 

    char target[30];
    strcpy(target,str); //copies a predefined string in a target str
    printf("copying to string target is: %s\n", target);

    printf("\n"); 

    char str2[]="boii";
    printf("string str2: %s\n", str2 );
    printf("concatenating str and str2: %s\n", strcat(str,str2)); //strcat() is string concatenation fun; fuses a and b into a.
    printf("string str is now %s\n",str);

    strncat(str,str2,3); //strncat
    printf("strncat used with n=3; str is now: %s\n", str); //n chars from str2 is concatenated to str1;
    printf("\n"); 

    printf("Comparing strings:- \n");
    printf("strcmp gives out the difference of no. of chars in 1st and 2nd str: %d\n",strcmp(str,str2));
    printf("%d", strncmp(str,str2,2));
    printf("\n");

    printf("Searching strings:-\n");
    char word[] = "Nightcrawler";
    printf("%s\n", word);
    printf("strchr function; searchs for char and returns pointer: %c\n", *strchr(word, 'c')); //strchr returns the pointer of char
    printf("Strrchr fn gives out the last pointer: %u" , strrchr(word, "crawl"));
    printf("STRSTR SEARCHES FOR substring: %c" , *strstr(word, "crawl"));


    
    return 0;
}