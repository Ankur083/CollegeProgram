#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next,*prev;
};

struct node *head=NULL;
struct node *temp;

void makeNode(){
    int choice;
   do{
    printf("\nDo you want to make a node(0/1):");
    scanf("%d",&choice);
    if(choice==1){
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter a value on newnode:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
        newnode->prev=NULL;
        head=newnode;
        }
        else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        }
    }
    }
    while(choice);
}

void traverse(){
    if(head==NULL){
        printf("linkedlist is empty");
        return;
    }
    temp=head;
    while(temp!=NULL){
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}

void insertAtBegin(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value on newnode insert At begin:");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=head;
    head=newnode;    
}

void insertAtPos(){
    int i=1;
    int pos;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value on newnode insert at position:");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    if(head==NULL){
        newnode->next=NULL;
        newnode->prev=NULL;
        head=newnode;
    }
    else if(head->next==NULL){
        temp=head;
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
    }
    else{
        struct node *temp1;
        temp=head;
        printf("Enter a position of linkedlist where insert:");
        scanf("%d",&pos);
        while(i<pos){
            temp1=temp;
            temp=temp->next;
            i++;
        }
        newnode->next=temp;
        newnode->prev=temp1;
        temp->prev=newnode;
        temp1->next=newnode;
    }
}

void insertAtLast(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value on newnode insert at end:");
    scanf("%d",&newnode->data);
    if(head==NULL){
        newnode->prev=NULL;
        newnode->next=NULL;
        head=newnode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
        newnode->prev=temp;
    }
}

void deleteBegin(){
    if(head==NULL){
        printf("Linkedlist is empty");
    }
    else{
        temp=head;
        head=temp->next;
        temp->next=NULL;
        free(temp);
        printf("\nAfter  delete a node at begin the Doubly linkedlist is :");
    }
}

void deleteAtPos(){
    int i=0;
    int pos;
    struct node *temp1;
    if(head==NULL){
        return;
    }
    else{
        printf("\nEnter a position of linkedlist where to delete a node:");
        scanf("%d",&pos);
        temp=head;
        while(i < pos-1){
            temp1=temp;
            temp=temp->next;
            i++;
        }
        if(temp->next!=NULL){
            temp1->next=temp->next;
            temp->next=NULL;
            temp->prev=NULL;
            free(temp);
        }
        else{
            temp1->next=NULL;
            temp->prev=NULL;
            free(temp);
        }
        printf("\nAfter deleting a node at given position the  Doubly linkedlist is:");
    }   
}

void deleteAtLast(){
    temp=head;
    struct node *temp1;
    if(head==NULL){
        printf("Linkedlist is empty");
    }
    else{
        while(temp->next!=NULL){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        temp->prev=NULL;
        free(temp);
        printf("\nAfter delete a node at end the Doubly linkedlist is:");
    }
} 

int main(){
    makeNode();
    printf("Doubly linked list is:");
    traverse();
    insertAtBegin();
    traverse();
    insertAtLast();
    traverse();
    insertAtPos();
    traverse();
    deleteBegin();
    traverse();
    deleteAtLast();
    traverse();
    deleteAtPos();
    traverse();
    
    return 0;
}