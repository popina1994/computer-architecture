#include <stdio.h>

void swap(int *x, int *y) {
    if (x == y)
    {
        return;
    }
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverseArray(int *array, int len) {
    int first, last;
    for (first = 0, last = len-1; first <= last; first++, last--) {
        swap(array + first, array + last);
    }
}

void printArray(int *array, int len)
{
     for (int idx = 0; idx < len; idx ++)
    {
        printf("%d ", array[idx]);
    }
    printf("\n");
}

int main(void)
{
    int x = 1;
    int y = 2;
    printf("x: %d y: %d\n", x, y);
    swap(&x, &y);
    printf("x: %d y: %d\n", x, y);

    int A[5] = {1, 2, 3, 4, 5};
    int B[4] = {1, 2, 3, 4};
    printArray(A, 5);
    reverseArray(A, 5);
    printArray(A, 5);

    printArray(B, 4);
    reverseArray(B, 4);
    printArray(B, 4);
    printf("\n");

    return 0;
}