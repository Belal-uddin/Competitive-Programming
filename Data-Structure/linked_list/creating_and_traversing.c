#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *next;
};


int main()
{
	
	struct node *head,*newNode,*temp;
	int data,n;

	printf("Number of nodes?: ");
	scanf("%d",&n);

	head = (struct node *)malloc(sizeof(struct node));

	printf("enter data for head:");
	scanf("%d",&data);
	head->data = data;
	head->next = NULL;

	temp = head ;

	for(int i=2;i<=n;i++)
	{
		newNode = (struct node *)malloc(sizeof(struct node));
		printf("enter data : ");
		scanf("%d",&data);

		newNode->data = data;
		newNode->next = NULL;

		temp->next = newNode;
		temp = temp->next;
	}

	temp = head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
    
    return 0;
}
