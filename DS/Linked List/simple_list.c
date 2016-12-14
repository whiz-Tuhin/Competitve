#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct node
{
	int data;
	struct node* link;
}NODE;

void printlist(NODE* head)
{
	NODE* current = head;
	while(current!=NULL)
	{
		printf("%d ",current->data);
		current = current->link;
	}
}

int main()
{
	NODE* head =  (NODE*)malloc(sizeof(NODE));
    NODE* second = (NODE*)malloc(sizeof(NODE));
    NODE* third = (NODE*)malloc(sizeof(NODE));

    head->data = 1;
    head->link = second;

    second->data = 2;
    second->link = third;

    third->data = 3;
    third->link = NULL;

    printlist(head);

    return 0;

}