#include <stdio.h>
#include <string.h>

struct student {
    char name[15];
    int age;
    char section;
};

int main() {
    struct student s1 = {"drake" , 18 , 'c'};
    printf("%s %d %c\n" ,s1.name, s1.age, s1.section);

    struct student s2;
    char name[10];
    printf("Enter name: ");
    scanf("%s", &name);
    strcpy(s2.name, name);

    printf("Enter age: ");
    scanf("%d", &s2.age);

    printf("Enter section: ");
    scanf (" %c", &s2.section);

    printf("%s %d %c\n" ,s2.name, s2.age, s2.section);

    
    return 0;
}