#include <stdio.h>

int P[5] = {1, 2, 3, 4, 5};
short Q[2] = {1, 2};
char *R[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
double SD[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
double *S[10] = {&SD[0], &SD[1], &SD[2], &SD[3], &SD[4], &SD[5], &SD[6], &SD[7], &SD[8], &SD[9]};
short *T[2] = {&Q[0], &Q[1]};

int main()
{
    printf("Char is: %c\n", **R);
    printf("Char is: %c\n", **(R+1));
    printf("Char is: %c\n", *(*R+1));
    printf("Char is: %c\n", *(*(R+1)+1));
    return 0;
}