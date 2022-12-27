#include "../include/prob4.h"
#include <stdlib.h>

struct stack_t
{
    int* head;
};

struct stack_t *Stack_new()
{
    return NULL;
}

void Stack_push(struct stack_t *stack, int value, int *error);

int Stack_pop(struct stack_t *stack, int *error);

void Stack_delete(struct stack_t *stack);