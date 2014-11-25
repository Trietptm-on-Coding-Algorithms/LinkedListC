#include <stdio.h>
#include <stdlib.h>
//declares stuff and refs
struct node
{
	int data;
	struct node *next;
}*start = NULL;

void getInput()
{
	struct node *new_node, *currentNode; 
	currentNode = NULL;
	new_node = (struct node *)malloc(sizeof(struct node));
	printf("Type in a list of numbers hitting enter to record each one by one:\nAt end, type -0.\n");
	while (new_node->data != -0)
	{
		new_node = (struct node *)malloc(sizeof(struct node));
		new_node->next = NULL;
		scanf_s("%d", &new_node->data);
		if (new_node->data==NULL)
		{
			break;
		}
		if (new_node->data == -0)
		{
			break;
		}
		if (start == NULL)
		{
			start = new_node;
		}
		else
		{
			currentNode->next = new_node;
		}
		currentNode = new_node;
	}
}
//print list and then put null when done
void display()
{
	struct node *new_node;
	new_node = start;
	while (new_node != NULL || new_node != 0)
	{
		printf("%d-->", new_node->data);
		new_node = new_node->next;
	}
	printf("NULL");
}

int main(char ** args)
{
	//Grab/ask for input
	getInput();
	//call to display everything
	display();
	return 0;
}