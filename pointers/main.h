#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node
{
	int data;
	Node *link;
};

void count_of_nodes(Node *);
char *_strtok(char *str, const char *delim);
char *_strdup(char *str);
int _strlen(char *str);

#endif
