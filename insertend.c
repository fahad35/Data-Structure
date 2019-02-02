#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;
node *head;
void insertEnd(int data)
{
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        newnode=head;
    }
    else{
        node *current=head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=newnode;
    }
}

void printData()
{
    node *current=head;
    printf("New list is:");
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
int main()
{
head=(node*)malloc(sizeof(node));
    head->data=3;
    head->next=(node*)malloc(sizeof(node));
    head->next->data=10;
    head->next->next=(node*)malloc(sizeof(node));
    head->next->next->data=2;
    head->next->next->next=(node*)malloc(sizeof(node));
    head->next->next->next->data=1;
    head->next->next->next->next=NULL;
    printData();
    insertEnd(50);
    printf("\n");
    printf("Final ");
    printData();
}
