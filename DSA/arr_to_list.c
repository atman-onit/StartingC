#include <stdio.h>
#include<stdlib.h>
typedef struct node {
    int value;
    struct node* next;
}node;
void printlist (node* start){
    int i=0;
    node* ptr = start;
        while (ptr!=NULL){
            printf("Node %d Value: %d\n" , i, ptr->value);
            ptr = ptr->next;
            i++;
        }
}
node* arr_to_list(int arr[], int size){
    node* start = (node*)malloc(sizeof(node));
    start->value= arr[0];
    start->next=NULL;

    node* ptr = start;

    for(int i=1;i<size;i++){
        node* new_node = (node*)malloc(sizeof(node));
        new_node->value = arr[i];
        new_node->next = NULL;

        ptr->next = new_node; //takes previous node's next and adds new node into it
        ptr = new_node;//ptr is shifted to next node
        
    }
    
    return start;
}

int main() {
    int arr[4] = {1,2,3,4};
    int size = 4;
    node* start = arr_to_list(arr, 4);
    printlist(start);
    return 0;
    
}