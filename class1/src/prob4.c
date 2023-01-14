#include "../include/prob4.h"
#include <stdlib.h>
#include <stdio.h>

struct stack_t *Stack_new()
{
    struct stack_t* newStack  = NULL;
    newStack = malloc(sizeof(struct stack_t));
    if (newStack == NULL)
    {
        return NULL;
    }

    newStack->head = NULL;

    return newStack;
}

void Stack_push(struct stack_t *stack, int value, int *error)
{
    struct node_t* newElem = malloc(sizeof(struct node_t));

    if (newElem == NULL)
    {
        *error = 1;
        return;
    }

    newElem->elem = value;
    newElem->next = stack->head;

    stack->head = newElem;
    *error = 0;
}

int Stack_pop(struct stack_t *stack, int *error)
{
    if (stack->head == NULL)
    {
        *error = 1;
        return 0;
    }
     struct node_t* popElem = stack->head;
     stack->head = popElem->next;
     int retVal = popElem->elem;
     free(popElem);

     *error = 0;

     return retVal;
}

void Stack_delete(struct stack_t *stack)
{
    free(stack);
}

int main(void)
{
    struct stack_t* pStack = Stack_new();
    int error;
    Stack_push(pStack, 1, &error);
    Stack_push(pStack, 2, &error);
    Stack_push(pStack, 3, &error);

    printf("elem %d \n", Stack_pop(pStack, &error));
    printf("elem %d \n", Stack_pop(pStack, &error));
    printf("elem %d \n", Stack_pop(pStack, &error));

    Stack_delete(pStack);

    return 0;
}