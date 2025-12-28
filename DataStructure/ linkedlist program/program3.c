#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *temp;

void traverse(){
    temp=head;
    printf("linkedlist are:");
    while(temp!=NULL){
        printf("%d,",temp->data);
        temp=temp->next;
    }
}

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

void joinBeg(){
    struct node *temp1,*prev,*temp2;
    temp1=head;
    // temp2=head;
    while(temp1->next!=NULL){
        prev=temp1;
        temp1=temp1->next;
    }
    temp1->next=head;
    head=temp1;
    prev->next=NULL;
    printf("\nAfter updating\n");
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
    joinBeg();
    traverse();
  return 0;   
}