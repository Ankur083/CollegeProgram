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
  printf("linkedlist is : ");
    temp = head;
    while(temp !=NULL){
        printf("%d  ",temp->data );
        temp=temp->next;
    }
    printf("\n");
}

void reverse(){
   struct node *curr,*prev=NULL,*forw=NULL;
   curr=head;
    
    while(curr!=NULL){
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    head=prev;
}

int main(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value of newnode:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    head=newnode;
    temp=head;

    makeNode();
    traverse();
    reverse();
    printf("After reverse \n");
    traverse();
    
    return 0;
}