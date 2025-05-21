// int, float, char, how to print a var,

#include <stdio.h>

int main()
{
    // int, float, char
    int a = 10;
    float b = 20.5;
    char c = 'A';
    char s = 'D';
    int v = 90;
    // int/float is an integer variable, so it has to be a character itself just like in real mathermatics
    float d = 99.22221;
    // float e = 99.2222212; // This is not valid, float can only have 6 decimal places
    // char 3 = 'A'; // This is not valid, variable names cannot start with a digit
    char ae = 'L';

    // TEMPLATE: for numbers, variable_name = value;
    // TEMPLATE: for characters, variable_name = 'value'; IN SINGLE QUOTES
    printf ("hELLO");
    printf("float b's values is %f\n", b);
    return 0;
}