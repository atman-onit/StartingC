#include <stdio.h>

int main() {
    // this code is an example of switch break case in play

    int cgpa ;
    char grades ;

    printf("enter cgpa: ");
    scanf("%d" , &cgpa);

    switch (cgpa){

    case 10:
        printf("You got the job as the CEO!");
        break;
    
    case 9:
        printf("You got the job as Boss!");
        break;
    
    case 8: 
        printf("You got the job as Senior manager!");
        break;

    case 7:
        printf("You got the job as Junior manager");
        break;
    
    case 6:
        printf("All the best working as a call center boy");
        break;
    

    default: printf("Its over gang");
    }
        
    return 0;
}

/*
switch (variable) {
    case int_1:
        code
        break;

    case int_2:
        code
        break;
        
    case int_3
        code
        break;
        .
        .
}
*/ 