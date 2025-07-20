#include <stdio.h>

int main() {
    
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);

    if(100>= marks &&  marks>=80) {
        printf("Grade A");
    }

    else if(79>= marks && marks >=50) {
        printf("Grade B");
    }

    else if(49>= marks && marks>=29) {
        printf("Grade C");
    }

    else if (marks<29) {
        printf("You failed");
    }

    return 0;
}