#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *head;

void insert_in_front(int data)
{
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
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
    int i,n,m;
    printf("How many you insert insert_in_front:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        insert_in_front(m);
        printData();
    }
    return 0;
}

