#include "main.h"

int main(void)
{
	Node *head = NULL;

	head = malloc(sizeof(Node));

	head->data = 10;
	head->link = NULL;

	Node *current = malloc(sizeof(Node));
	current->data = 20;
	current->link = NULL;
	head->link = current;

	current = malloc(sizeof(Node));
	current->data = 30;
	current->link = NULL;
	head->link->link = current;

	current = malloc(sizeof(Node));
	current->data = 40;
	current->link = NULL;
	head->link->link->link = current;

	current = malloc(sizeof(Node));
	current->data = 50;
	current->link = NULL;
	head->link->link->link->link = current;

	count_of_nodes(head);
	return (0);
}
