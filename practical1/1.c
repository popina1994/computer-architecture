#include <stdio.h>
#include <stdint.h>

/*
int willOverflow(uint8_t a, uint8_t b) {
    return (a + b < a);
}
*/


int willOverflow(uint16_t a, uint16_t b) {
    uint16_t c = a + b;
    return (c < a);
}


// Addition of arithmetic operations casts everything to int.

int main(void)
{
    uint16_t a = 0xFFFFFFFF;
    uint16_t b = 0xFFFFFFFF;
    int over = willOverflow(a, b);
    printf("%d", over);
}
