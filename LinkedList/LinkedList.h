typedef struct list
{
	int num;
	struct list *next;
} list_t;
void push(list_t *head, int val);
void print_list(list_t *head);
void prime(int loop, list_t *pr);
