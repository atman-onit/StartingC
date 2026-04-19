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

int main()
{
    node n1, n2, n3;
    node* start = &n1;

    n1.value = 0;
    n1.next = &n2;

    n2.value = 1;
    n2.next = &n3;

    n3.value = 2;
    n3.next = NULL;
    node n0;

    // to add node in beginning
    if (start != NULL)
    {
        n0.value = -1;
        n0.next = start;
        start = &n0;    
    }
    printlist(start);
    printf("\naddress of start is %p\n", start);
    printf("start->value: %d; start->next: %p\n", start->value,start->next);
    printf("node ptr of n1 is %p", &n1);


    //to add node in the end
    node* ptr = start;
    node last;
    while(ptr->next!=NULL){ //goes till the last node
        ptr = ptr->next;
    } 
    
    ptr->next = &last; //sets last node's next to ptr of new node
    last.next = NULL;
    last.value = 3;
        
    printlist(start);
    printf("\naddress of end is %p\n", &last);
    printf("start->value: %d; start->next: %p\n", ptr->value,ptr->next);


    return 0;
}