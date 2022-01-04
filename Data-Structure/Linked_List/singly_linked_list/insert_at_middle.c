void insert_at_position(int data,int pos)
{
	struct node *newNode,*temp;
	newNode = (struct node *)malloc(sizeof(struct node));

	newNode->data = data;
	newNode->next = NULL;

	temp = head;

	for(int i=2;i<=pos-1;i++)
	{
		temp = temp->next;
		if(temp==NULL)break;
	}

	newNode->next = temp->next;//connecting newnode with the rest.
	temp->next = newNode;//connecting previous with newnode

	
}
