#include <stdio.h>
#include <string.h>
struct student
{
    char first_name[15];
    char last_name[15];
    int age;
    char section;
};
int main()
{
    struct student s1, s2;

    char name1[15];
    printf("Enter first name: ");
    scanf("%s", &name1);
    strcpy(s1.first_name, name1);

    char name2[15];
    printf("Enter second name: ");
    scanf("%s", &name2);
    strcpy(s1.last_name, name2);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter section: ");
    scanf(" %c", &s1.section);

    printf("Name: %s %s ; Age: %d ; Section : %c\n", s1.first_name, s1.last_name, s1.age, s1.section);

    char name3[15];
    printf("Enter first name: ");
    scanf("%s", &name3);
    strcpy(s2.first_name, name3);
    char name4[15];
    printf("Enter second name: ");
    scanf("%s", &name4);
    strcpy(s2.last_name, name4);

    printf("Enter age: ");
    scanf("%d", &s2.age);

    printf("Enter section: ");
    scanf(" %c", &s2.section);

    printf("Name: %s %s ; Age: %d ; Section : %c", s2.first_name, s2.last_name, s2.age, s2.section);

    return 0;
}