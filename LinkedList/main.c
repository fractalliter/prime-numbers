#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"

void push(list_t *head, int val)
{
    list_t *current = head;
    if(current->next==NULL){
        current->next = (list_t *)malloc(sizeof(list_t));
        current->next->num = val;
        current->next->next = NULL;
        current->next->start = 0;
        current->next->end = 1;
        current->start=1;
    } else{
        while(current->next!=NULL){
            current = current->next;
        }
        current->next = (list_t *)malloc(sizeof(list_t));
        current->next->num = val;
        current->next->next = NULL;
        current->next->start = 0;
        current->next->end = 1;
        current->end = 0;
    }
}

void print_list(list_t *head)
{
    list_t *current = head;
    while (current != NULL)
    {
        if(current->start!=1){
            printf("%d\n", current->num);
        }
        current = current->next;
    }
}

int len(list_t *head)
{
    int count = 0;
    list_t *current = head;
    while (current != NULL)
    {
        if(current->start!=1) {
            count++;
        }
        current = current->next;
    }
    return count;
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