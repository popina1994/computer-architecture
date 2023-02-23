#include <stdio.h>
#include <stdlib.h>

char* binaryInt(int value)
{
    int len = sizeof(value) * 8;
    char* binStr = (char*)malloc(len + 1);
    for (int idx = len - 1; idx >= 0; idx --)
    {
        int testBit = 1 << idx;
        char cOut;
        if (value & testBit)
        {
            cOut = '1';
        }
        else
        {
            cOut = '0';
        }
        binStr[len - idx - 1] = cOut;
        value &= ~(testBit);
    }
    binStr[len] = '\0'; 
    return binStr;
}

int main()
{
    char* cOut = binaryInt(5);
    printf("Value is: %s\n", cOut);
    cOut = binaryInt(25);
    printf("Value is: %s\n", cOut);
    cOut = binaryInt(1111);
    printf("Value is: %s\n", cOut);
    cOut = binaryInt(-1);
    printf("Value is: %s\n", cOut);
    cOut = binaryInt(-3);
    printf("Value is: %s\n", cOut);
}
