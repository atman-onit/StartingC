//lets try to change a variable's value
#include <stdio.h>

int swap(int a){
    return a = 2;
}

int main() {
    int a = 4;
    swap(a); //a is set to 4 but when a is put into the swap function, the function tries to change it to 2
    return 0;
}

//this program does not work as a copy of value of a goes into the swap function which when changed doesn't effect the main
//we can swap numbers by calling the address and changing it value.