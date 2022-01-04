void insert_at_beginning(int data)
{
	struct node *newNode;
	newNode = (struct node *)malloc(sizeof(struct node));

	newNode->data = data;
	newNode->next = head;
	head = newNode;
}
