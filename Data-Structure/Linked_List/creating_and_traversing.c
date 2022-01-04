#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *next;
}*head;

void insert_at_beginning(int data);
void createlist(int n);
void displaylist();

int main()
{

	 int data,n;
	 printf("Enter number of nodes:");
	 scanf("%d",&n);
	 
	 createlist(n);

	 printf("The data of the list : ");
	 displaylist();

}

void createlist(int n)
{
	struct node *newNode,*temp;
	int data;

	head = (struct node *)malloc(sizeof(struct node));
	printf("enter data for node 1:");
	scanf("%d",&data);

	head->data = data;
	head->next = NULL;
    temp = head;
	for(int i=2;i<=n;i++)
	{
		newNode = (struct node *)malloc(sizeof(struct node));
		printf("Enter data for node %d: ",i);
		scanf("%d",&data);

		newNode->data = data;
		newNode->next = NULL;
		temp->next = newNode;
		temp = temp->next;
	}

}


void displaylist()
{
	struct node *temp;

	if(head==NULL)
	{
		printf("List is empty.\n");
	}
	else{
		temp = head;

		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp = temp->next;
		}
	}
}
