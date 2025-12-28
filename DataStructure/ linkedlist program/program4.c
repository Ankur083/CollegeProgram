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
    void print(struct node* head){
        // temp=head;
        if(head==NULL){
            return;  
        }
            printf("%d  ",head->data);
            print(head->next); 
    }

int main(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value of newnode:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    head=newnode;
    temp=head;
    makeNode();
    printf("Linkedlist are:");
    print(head);
    return 0;
}
