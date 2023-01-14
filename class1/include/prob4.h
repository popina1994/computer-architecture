
struct node_t
{
    struct node_t* next;
    int elem;
};

struct stack_t
{
    struct node_t* head;
};


struct stack_t *Stack_new();

void Stack_push(struct stack_t *stack, int value, int *error);

int Stack_pop(struct stack_t *stack, int *error);

void Stack_delete(struct stack_t *stack);