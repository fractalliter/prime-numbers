typedef struct list
{
	int num;
	struct list *next;
    int start;
    int end;
} list_t;
void push(list_t *, int);
void print_list(list_t *);
void prime(int, list_t *);
int len(list_t *);
