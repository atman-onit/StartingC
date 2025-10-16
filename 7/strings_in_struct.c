#include <stdio.h>
struct employee{
    int age;
    char name[];
};
int main() {
    struct employee e1,e2;
    e1.age = 17;
    //we cannot directly specify e2.name = "Drake" ;
    //rather we do it like:-
    strcpy(e1.name,"drake"); //copying string in string e1.name
    printf("%s\n", e1.name);
    printf("Age is %d", e1.age);


    
    return 0;
}