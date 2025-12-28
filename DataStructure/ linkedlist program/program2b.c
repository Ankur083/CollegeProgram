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

void sorting(){
    struct node *temp1,*temp2;
    int temp3;

    for(temp1=head;(temp1->next)!=NULL; ){
        for(temp2=temp1;(temp2->next)!=NULL;){
            temp2=temp2->next;
            if((temp1->data)>(temp2->data)){
                continue;
            }
            else if((temp1->data)==(temp2->data)){
                continue;
            }
            else{
                temp3=temp1->data;
                temp1->data=temp2->data;
                temp2->data=temp3;
            }
        }
        temp1=temp1->next;
    }
    printf("\nLinklist are in Descending  order: \n");

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
    sorting();
    traverse();
    return 0;
}