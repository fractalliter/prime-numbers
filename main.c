#include <stdlib.h>
#include <stdio.h>
#include "LinkedList/LinkedList.h"

int main(int argc, char *argv[])
{
    list_t *pr = (list_t *)malloc(sizeof(list_t));
    puts("Enter a number: ");
    int loop = 10;
    scanf("%d", &loop);
    prime(loop, pr);
    printf("Prime numbers: \n");
    print_list(pr);
    printf("Number of primes = %d\n", len(pr));
    free(pr);
    return 0;
}