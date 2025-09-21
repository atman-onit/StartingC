//we can swap numbers by calling the address and changing it value.
#include <stdio.h>

int swap(int*a) //gets the address of variable
{
    return *a = 2; //returns value in address of variable as 2
}
int main() {
    int a = 7;
    int* p_a = &a;
    printf("the value of a is %d" , swap(p_a));
    
//value does change to 2
    
    return 0;
}