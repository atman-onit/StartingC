//a pointer is a variable which stores the address of another variable

#include <stdio.h>

int main() {
   int a = 75;
   int* a_p = &a; //pointer is a pointer pointing to address of a;
   printf("address of a is %p\n" , a_p);
   //or
   printf("Address of a is %p\n" , &a);

   //%p is used to print pointer in hexadecimal

   int k = 99;
   int* k_p = &k;
   printf("address of k is %u\n" , k_p);
   printf("Address of k is %u\n" , &k);
    printf("Address of k is %p\n" , &k);
    



   //%u is used to print pointer in decimal form.


return 0;
}