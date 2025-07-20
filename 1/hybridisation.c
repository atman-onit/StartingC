#include <stdio.h>

int main() {
    //This code is to identify the hybrisation of molecules according to their steric number

    int steric;
    printf("Enter steric number: ");
    scanf("%d" , &steric);

    if(steric<2){
        printf("Molecule not hybridised");
    }
    
    else if(steric==2){
        printf("Hybridisation is sp");
    }

    else if(steric==3){
        printf("Hybridisation is sp2");
    }

    else if(steric==4){
        printf("Hybridisation is sp3");
    }

    else if(steric==5){
        printf("Hybridisation is sp3d");
    }

    else if(steric==6){
        printf("Hybridisation is sp3d2");
    }

    else if(steric>6){
        printf("Hybridisation is complex");
    }



    
    return 0;
}