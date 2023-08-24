#include "monty.h"
/**
  *f_rotl- Rotate the stack to the top
  *@head: Stack heads
  *@counter: line number
  *Return: return none
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

		if (*head == NULL || (*head)->next == NULL)
		{
			return;
		}
	aux = (*head)->next;
	aux->prev = NULL;
		while (tmp->next != NULL)
		{
		tmp = tmp->next;
		}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
