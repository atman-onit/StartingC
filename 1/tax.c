#include <stdio.h>

int main() {

    float income,tax;
    printf("ENTER INCOME: ");
    scanf("%f",&income);
    
    if (0 < income && income <= 250000){
        printf("Your tax is 0");
    }
    else if(250000 < income && income <= 500000) {
        printf("Your tax is %f", income * 0.05 );
    }
    else if(500000 < income && income <= 1000000) {
        printf("Your tax is %f", income * 0.2 );
    }
    else if( income > 1000000 ) {
        printf("Your tax is %f", income *0.3 );

    }
    return 0;
}