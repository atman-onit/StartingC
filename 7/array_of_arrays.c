#include <stdio.h>
struct attendance{
    char name[10];
    int attendance;

};
int main() {
    struct attendance a1,a2;
    struct attendance name[10];
    struct attendance attendance[10];
    printf("Enter names\n");
    for(int i=0; i<10;i++){
        printf("Enter name %d: ", i+1);
        scanf("%s", &name[i]);
        
    }
    for(int i=0; i<10;i++){
        printf("Enter attendance of student %d: ", i+1);
        scanf("%s", &attendance[i]);
        
    }
  
        printf("%s %d", a1.name , a1.name);
    



    return 0;
}