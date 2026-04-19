#include <stdio.h>

typedef struct node{
    int data;
    struct node* next;
} node;

int list_counter(node* start){
    int counter=0;
    node* ptr = start;
    while(ptr != NULL){
        ptr = ptr->next;
        counter++;
    }
    return counter;
}
void printlist (node* start){
    int i=0;
    node* ptr = start;
        while (ptr!=NULL){
            printf("Node %d Value: %d\n" , i, ptr->data);
            ptr = ptr->next;
            i++;
        }

}
node* addnode_pos_withvalue(node* start, int pos, int value){
    //to add node at position n 
    node new_node;
    node* ptr = start;
    if(pos==0){
        new_node.next = start;
        new_node.data = value;
        start = &new_node;
    }
    else{
    for(int i=0;i<pos-1 && ptr!=NULL;i++){
    ptr = ptr->next;
    }
    
    new_node.data = value;
    new_node.next = ptr->next;
    ptr->next = &new_node;
    }
    return start;
}
int main() {
    node n1,n2,n3;

    n1.data = 1;
    n2.data = 2;
    n3.data = 3;

    node* start = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    printf("%d elements\n", list_counter(start));
    printlist(start);
    int pos;
    printf("Enter position for new node: ");
    scanf("%d", &pos);

    int value;
    printf("Enter value for new node: ");
    scanf("%d", &value);
    addnode_pos_withvalue(start, pos, value);
    
    printf("%d elements\n", list_counter(start));
    printlist(start);
    
    


    return 0;
}