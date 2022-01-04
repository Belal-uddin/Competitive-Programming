void insert_at_end(int data)
{
	struct node *newNode,*temp;
	newNode = (struct node *)malloc(sizeof(struct node));

	newNode->data = data;
	newNode->next = NULL;
	temp = head;

	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
}
