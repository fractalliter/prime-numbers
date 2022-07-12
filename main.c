#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>
#include "LinkedList/LinkedList.h"

int main(int argc, char *argv[])
{
    list_t *pr = (list_t *)malloc(sizeof(list_t));
    int loop;
    int show_len = 0;
    int show_prime = 0;
    int i = 1;
    while(i < argc) {
        if(!strncasecmp(argv[i], "-n", 2)) {
            loop = (int)strtol(argv[++i], NULL, 10);
        }
        else if(!strncasecmp(argv[i], "-l",2)) {
            show_len = 1;
        }
        else if(!strncasecmp(argv[i], "-p", 9)) {
            show_prime = 1;
        }
        else {
            fprintf(stderr, "Unknown argument: %s\n", argv[i]);
        }
        i++;
    }
    if(loop == 0) {
        fprintf(stderr, "No loop number specified. use -n to specify a loop number. like -n 26\n");
        return 1;
    }
    prime(loop, pr);
    if(show_prime) {
        printf("Prime numbers: \n");
        print_list(pr);
    }
    if(show_len) {
        printf("Number of primes = %d\n", len(pr));
    }
    free(pr);
    return 0;
}