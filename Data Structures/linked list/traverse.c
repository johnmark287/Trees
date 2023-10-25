#include "main.h"

void count_of_nodes(Node *head)
{
	int count = 0;
	if (head == NULL)
		printf("Linked list is empty");
	
	Node *ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("Number of nodes: %d\n", count);
}
