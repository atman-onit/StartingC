#include <stdio.h>
#include<string.h>
struct student{
    char name[10];
    int attendance;
    float weight;
};
int main(){   
    
    struct student s[3]; //array of 3 students

    strcpy(s[0].name,"DUMBO");
    s[0].attendance = 20;
    s[0].weight = 40.3;

    strcpy(s[1].name,"DUBO");
    s[1].attendance = 30;
    s[1].weight = 45.3;

    strcpy(s[2].name,"DBO");
    s[2].attendance = 20;
    s[2].weight = 20.3;

    for(int i=0;i<3;i++){
        printf("Student %d: Name %s; Attendance %d; Weight %f\n", i+1, s[i].name,s[i].attendance,s[i].weight);

    }
    return 0;
}