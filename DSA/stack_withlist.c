#include <stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int value;
    struct stack *next;
}stack;


stack* push(stack* top, int value){
    stack* ptr = (stack*)malloc(sizeof(stack)); //makes 1 node
    ptr->value = value; //sets value
    if(top==NULL){
        ptr->next = NULL; //sets next
        top = ptr;//updates top to new node
    }
    else{
        ptr->next = top;
        top = ptr;
    }
    return top;
}

stack* pop(stack* top){
    if(top==NULL){
        printf("Nothing to pop");
    }
    else{
        stack* temp = top;
        printf("popped %d off stack\n", top->value);
        top = top->next;
        free(temp);
    }
    return top;
}
void displaystack(stack* top){
    if(top){
        stack* ptr = top;
        while(ptr!=NULL){
            printf("%d\n", ptr->value);
            ptr = ptr->next;
        }
    }
}
int main() {
    stack* top =  NULL;
    top = push(top, 3);
    top = push(top, 3);
    top = push(top, 3);

    displaystack(top);

    top = pop(top);
    displaystack(top);

    
    return 0;
}