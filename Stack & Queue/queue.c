#include <stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}node;

node *top=NULL;

void enqueue(int data)
{
	node *newnode=(node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	if(top==NULL){
		top=newnode;
	}
	else{
		int i=1;
		node *current=top;
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=newnode;
	}
}

void deqeueue()
{
	node *newnode;
	if(top==NULL){
		printf("qeueue is Empty!\n");
		return;
	}
	newnode=top;
	top=top->next;
	free(newnode);
}

void printData()
{
	node *current=top;
	printf("New list is: ");
	while(current!=NULL){
		printf("%d ", current->data);
		current=current->next;
	}
	printf("\n");
}


int main()
{
  int i,n,m,j,k,l;
 printf("How many data you insert:");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
		scanf("%d",&k);
		enqueue(k);
		printData();
	}
	printf("\n");
	printf("How many data you delete:");
	scanf("%d",&m);
	 for(i=0;i<m;i++){
       deqeueue();
		printData();
	}
     return 0;
}
