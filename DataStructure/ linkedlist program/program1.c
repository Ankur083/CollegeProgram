#include<stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node *next;
    };

struct node *head;
struct node *temp;

void traverse(){
  printf("The linked list is : ");
    temp = head;
    while(temp !=NULL)
    {
        printf("%d  ",temp->data );
        temp=temp->next;
    }
    printf("\n");
}

void insertAtbegin(){
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   printf("\nEnter the value of node insert at begin:");
   scanf("%d",&newnode->data);
   newnode->next=head;
   head=newnode;
}

void insertAtEnd(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    printf("\nEnter the value of node insert at end:");
    scanf("%d",&newnode->data);
    temp->next=newnode;
    newnode->next=NULL;
}

void insertAtPos(){
    struct node *newnode;
    int i=1,pos;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the position to insert node:");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    printf("Enter a value of node insert %dth position:",pos);
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}

void deleteAtbeg(){
    if(head==NULL)
    {
        return;
    }
    else
    {
        if(head->next==NULL)
        {
          free(head);
          head=NULL;
             return;
        }
        else
        {
            struct node *temp=head;
             head=head->next;
               temp->next=NULL;
            free(temp);
        }
    }    
}

void deleteAtend(){
    struct node *prev=head;
    temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
}

void deleteAtPos(){
    struct node *newnode;
    int i=1,pos;
    printf("\nEnter a position from delete a node:");
    scanf("%d",&pos);

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    temp=head;
    if (pos == 1) {
        head = head->next;
        free(temp);
        return;
    }
    
    while (i < pos - 1 && temp->next != NULL) {
        temp = temp->next;
        i++;
    }
    
    if (temp->next == NULL) {
        printf("Position out of bounds!\n");
        return;
    }
    newnode = temp->next;
    temp->next = newnode->next;
    free(newnode);
}

int main(){

    head = NULL;
    int choice = 1;
    temp=head;

    while(choice)
    {
        struct node *newnode ;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value of newnode:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp -> next = newnode;
            temp=newnode;
        }
        printf("Do you want to create another node(0/1):");
        scanf("%d",&choice);
    }
    traverse();

    insertAtbegin();
    traverse();
  
    insertAtEnd();
    traverse();
 
    insertAtPos();
    traverse();

    deleteAtbeg();
    printf("\nThe linkedlist after delete at begin:\n");
    traverse();

    deleteAtend();
    printf("\nThe linkedlist after delete at end:\n");
    traverse();

    deleteAtPos();
    printf("The linkedlist after delete at certain position:\n");
    traverse();
    printf("\n");

    return 0;
}


