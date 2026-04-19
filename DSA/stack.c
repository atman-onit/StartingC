    #include <stdio.h>
    #include<stdlib.h>
    int top = -1;


    void push(int arr[],int size, int value){
        if (top == size-1){
            printf("stack overflow");
        }
        else{
            arr[++top] = value;
            printf("pushed %d on stack\n", value);
        }

    }
    void pop(int arr[]){
        if(top == -1){
            printf("Nothing to pop- stack empty");
        }
        else{
            int val = arr[top--];
            printf("popped %d\n", val);
        
            
        }
    }
    void displaystack(int arr[], int size){
        if(top==-1){
            printf("stack underflow");
        }
        else{
            printf("stack is :- \n");
            for(int i=top;i>=0;i--){
                printf("%d\n", arr[i]);
            }
        }
    }
    int main() {
        int size;
        printf("Enter stack size: ");
        scanf("%d", &size);
        
        int* arr = (int*)malloc(sizeof(int)*size);
        int value;
        printf("enter value: ");
        scanf("%d", &value);
        push(arr,size, value);
        push(arr,size, 3);
        displaystack(arr, size);
        push(arr,size,8);
        push(arr,size, 3);
        displaystack(arr,size);
        pop(arr);
        displaystack(arr,size);




        
        return 0;
    }