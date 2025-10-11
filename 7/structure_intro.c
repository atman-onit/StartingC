#include <stdio.h>



int main() {
//a structure is a variable which can hold dissimilar types of variable types like int char float etc
    struct employee { //initialised with struct (variable specifier) with { //variables };
        int age;
        float salary;
    }; //semicolon is important
    struct employee e1,e2; //defines e1 and e2 in struct
        e1.age = 17;
        e1.salary = 35000.0;
        e2.age = 19;
        e2.salary = 40000.0;
    printf("E1: Salary is %f, age is %d\n", e1.salary, e1.age);
    printf("E2: Salary is %f, age is %d", e2.salary, e2.age);

    
    return 0;
}