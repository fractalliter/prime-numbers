#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"

void push(list_t *head, int val)
{
	list_t *current = head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	/* now we can add a new variable */
	current->next = (list_t *)malloc(sizeof(list_t));
	current->next->num = val;
	current->next->next = NULL;
}

void print_list(list_t *head)
{
	list_t *current = head;
	while (current != NULL)
	{
		printf("prime number %d\n", current->num);
		current = current->next;
	}
}

void prime(int loop, list_t *pr)
{
	int i = 1;
	int j = 0;
	while (i <= loop)
	{
		if (i != 1)
		{
			j = i - 1;
			while (j >= -1)
			{
				if (j != 0 && j != 1 && i % j == 0)
				{
					break;
				}
				else if (j == 0)
				{
					push(pr, i);
				}
				j--;
			}
		}
		i++;
	}
}