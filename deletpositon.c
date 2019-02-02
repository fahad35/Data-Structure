#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *head;

void delposition()
{
    int i,n,c=1;
    node *current=head;
    node *previous;
    printf("Enter your Position: ");
    scanf("%d",&n);
    if(n==1){
        head=head->next;
        free(current);
    }
    else
    {
        node *current=head;
        while(c<n){
            previous=current;
            current=current->next;
            c++;
        }
        previous->next=current->next;
        free(current);
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
    delposition();
    printf("\n");
    printf("Final ");
    printData();
}
