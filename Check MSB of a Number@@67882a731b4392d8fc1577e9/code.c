#include <stdio.h>
#define BITS sizeof(int) * 8

int main()
{
    int num, msb;

    scanf("%d", &num);

    msb = 1 << (BITS - 1);

    if(num & msb)
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
