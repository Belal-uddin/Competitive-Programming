void deletefirstnode()
{
	struct node *firstnode;

	firstnode = (struct node *)malloc(sizeof(struct node));

	firstnode = head;
	head = head->next;
	
	free(firstnode);
}
