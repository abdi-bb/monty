#include "monty.h"

/**
* _freeStack - frees a doubly linked list
* @head: head of the stack
*/
void _freeStack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
