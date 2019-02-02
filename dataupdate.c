#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *head=NULL;

void insert(int data)
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        temp=head;
    }
    else{
        node *current=head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=temp;
    }
}

void update(int data)
{
    node* current=head;
    int c=1,n;
    printf("Enter the update position: ");
    scanf("%d",&n);
    while(c<n)
    {
        current=current->next;
        c++;
    }
    current->data=data;
}

//void printData()
//{
//    node *current=head;
//    printf("New list is:");
//    while(current!=NULL){
//        printf("%d ",current->data);
//        current=current->next;
//    }
//    printf("\n");
//}

void print()
{
	node *current=head;
	printf("New list is: ");
	while(current!=NULL){
		printf("%d ", current->data);
		current=current->next;
	}
	printf("\n");

	return;
}

int main()
{
//    head=(node*)malloc(sizeof(node));
//    head->data=3;
//    head->next=(node*)malloc(sizeof(node));
//    head->next->data=10;
//    head->next->next=(node*)malloc(sizeof(node));
//    head->next->next->data=2;
//    head->next->next->next=(node*)malloc(sizeof(node));
//    head->next->next->next->data=1;
//    head->next->next->next->next=NULL;

    int j;
    for(j=1;j<6;j++){
        insert(j);
    }
 //   printf("%d \n", head->data);
    print();
//    update(5);
//    printf("Final ");
//    printData();
}
