#include<stdio.h>
#include<stdlib.h>
 struct Node{
     int data;
     struct Node*next;
 };
 void push(struct Node**top,int value){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    if(!newNode){
        printf("Memory allocation error\n");
        return;
    }
    newNode->data=value;
    newNode->next=*top;
    *top=newNode;
    printf("Pushed %d onto the stack\n",value);
 }
 int pop(struct Node**top){
    if(*top==NULL){
        printf("Stack is empty! Cannot pop\n");
        return -1;
    }
    struct Node*temp=*top;
    int poppedValue=temp->data;
    *top=(*top)->next;
    free(temp);
    printf("Popped %d from the stack\n",poppedValue);
    return poppedValue;
 }
 void displayStack(struct Node* top){
    struct Node*temp=top;
    if(top==NULL){
        printf("stack is empty\n");
    }
    else{
        printf("stack elements:");
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->next);
        temp=temp->next;
    }
    printf("\n");
 }



 int main(){
    struct Node* stack=NULL;
    push(&stack,10);
     push(&stack,20);
    push(&stack,30);
    displayStack(stack);

    pop(&stack);
    displayStack(stack);
    return 0;

 }