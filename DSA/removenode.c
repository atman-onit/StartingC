//linked list is a data structure which is dynamic

#include <stdio.h>

typedef struct node {
    int value;
    struct node* next;
} node;

void printlist (node* start){
    int i=0;
    node* ptr = start;
        while (ptr!=NULL){
            printf("Node %d Value: %d\n" , i, ptr->value);
            ptr = ptr->next;
            i++;
        }
}
int elementscounter(node* start){
    int i=0;
    node* ptr = start;
    while(ptr!=NULL){
        ptr = ptr->next;
        i++;
    }
    return i;
}
int main() {
        node n1,n2,n3,n4;
        node* start = &n1;

        n1.value = 0;
        n1.next = &n2;

        n2.value = 1;
        n2.next = &n3;

        n3.value=2;
        n3.next=&n4;

        n4.value=9;
        n4.next=NULL;

        printlist(start);
        printf("\nno. of elements is %d\n", elementscounter(start));

        //to delete note from end
        node* curr = start;
        node* prev = curr;
        while(curr->next!=NULL){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        
        printlist(start);
        
        
        
    return 0;
}