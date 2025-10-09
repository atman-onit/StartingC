//string is an array of characters terminated by a null character..

#include <stdio.h>

void revstr (char str[],int size){
    int temp;
    for(int i=0;i<size/2;i++){
        temp=str[i];
        str[i]=str[size-i-1];
        str[size-i-1]=temp;
    }

}

int main() {
    char str[5] = {'s','t','a','r','t','\0'};
    int size=5;
    printf ("String is:-\n ");
    for(int i=0;i<5;i++){
    printf ("%c ", str[i]);
    }
    printf("\n");

    printf("Reverse of the string is:-\n");
    revstr(str,5);
    for(int i=0;i<5;i++){
    printf ("%c ", str[i]);
    }
    printf("\n");
    //We can also initialise a string like:-
    char str2[] = "HELLO";
    for(int i=0;i<5;i++){
    printf ("%c ", str2[i]);
    }
    //or
    printf("\n");
    char str3[] = {"HELLO"};
    for(int i=0;i<5;i++){
    printf ("%c ", str3[i]);
    }


    return 0;
}