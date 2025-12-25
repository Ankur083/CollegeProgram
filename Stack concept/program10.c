#include<stdio.h>

int max=5;
int stack[5];
int top=-1;

void push(){
    int item;
    printf("\nEnter the number which push in stack: ");
    scanf("%d",&item);
    if(top==max-1){
        printf("Stack is overflow");
    }
    else{
        top=top+1;
        stack[top]=item;
    }   
}

int pop(){
    if(top==-1){
        printf("stack is underflow");
        return -1;
    }
    else{
        int item=stack[top];
        top=top-1;
        return item;
    }
}

void display(){
  for(int i=top;i>=0;i--){
    printf("%d ",stack[i]);
  }
}

void peek(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("%d\n ",stack[top]);
    }
}

int main(){
    push();
    push();
    push();
    push();
    push();
    printf("\nStack is :");
    display();

    printf("\nTop of the stack:");
    peek();

    pop();
    printf("\nAfter pop new stack:");
    display();

    printf("\nTop of the stack:");
    peek();
    
    return 0;
}