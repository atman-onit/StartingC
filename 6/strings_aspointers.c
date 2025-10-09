#include <stdio.h>

int main() {
    //we can also store strings in pointers.
    char* ptr = "hello\n" ;
    printf("%p\n", ptr);
    printf("%s", ptr);

    //we can reassign strings to a var this way
    ptr = "bye\n";
    printf("%p\n", ptr);
    printf("%s", ptr);


    
    return 0;
}