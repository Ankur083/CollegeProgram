#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

struct node *temp;

void makeNode(){
    int choice;
    while(1){
        printf("Do you want to make a newnode(0/1): ");
        scanf("%d",&choice);
        if(choice==0){
            return;
        }
        else{
            struct node *newnode=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter a value of newnode:");
            scanf("%d",&newnode->data);
            temp->next=newnode;
            newnode->next=NULL;
            temp=temp->next;
        }
    }
}

void traverse(){
    temp=head;
    printf("linkedlist are:");
    while(temp!=NULL){
        printf("%d,",temp->data);
        temp=temp->next;
    }

}

void checking(){
    if(head==NULL){
        printf("checking is not possible");
        return;
    }
    temp=head;
    while(temp->next!=NULL){
        if( temp->data>temp->next->data){
            printf("\nnot in non decreasing order");
            return;   
        }
        temp=temp->next;   
    }
    printf("\nLINkedlist is in non decreasing order");    
}

int main(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter a value of newnode:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    head=newnode;
    temp=head;
    
    makeNode();
    traverse();
    checking();
    
    return 0;
}