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
            newnode->next=head;
            temp=temp->next;
        }
    }
}

void traverse(){
  printf("the circular linked list is : ");
    temp = head;
    printf("%d  ",temp->data);
    temp=temp->next;
    while(temp !=head){
        printf("%d  ",temp->data );
        temp=temp->next;
    }
    printf("\n");
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
    return 0;
}

