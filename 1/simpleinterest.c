#include <stdio.h>

int main() {
   float p;
   printf ("Enter Principal amount \n");
   scanf("%f" , &p);
   
   float r;
   printf ("Enter interest rate\n");
   scanf("%f" , &r );

   float t;
   printf ("Enter Time durantion \n");
   scanf ("%f" , &t);

   float SI = (p * r * t) / 100 ;
   printf("Simple interest is %f" , SI);
    
    
    
   return 0;
}

