#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int stack[MAX];
int top=-1;

int isFull(){
    return top==MAX-1;
}
int isEmpty(){
    return top==-1;
}
void push(int value){
    if(isFull()){
        printf("Stack Overflow! cannot push %d\n",value);
        return;
    }
    stack[++top]=value;
    printf("%d pushed to stack\n",value);
}

int pop(){
    if(isEmpty()){
        printf("Stack Overflow ");
        return -1;
    }
    return stack[top--];
}
void traverse(){
    if(isEmpty()){
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack elements:\n"); // Add this to clarify what is being printed
    for(int i=top; i>=0; i--){
        printf("%d ", stack[i]); // Adding a space for better readability
    }
    printf("\n"); // Print a new line at the end for clean output
}

int main(){
    int choice,value;
    while(1){
printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter the value to push :");
            scanf("%d",&value);
            push(value);
            break;
            case 2:
                value = pop();
                if (value != -1) {
                    printf("Popped element: %d\n", value);
                }
                break;
            case 3:
                traverse();
                break;
            case 4:
                exit(0); // Exit the program
            default:
                printf("Invalid choice! Please try again.\n");
        
        }
    }
    return 0;
}