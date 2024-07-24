#include <stdio.h>

int SlowFib(int n)
{
    if(n == 1) return 1;
    else if (n == 2) return 1;
    else return (SlowFib(n - 1) + SlowFib(n - 2));
}

void    MemoryFriendlyCalculation()
{
    for (int i = 46; i <= 100; i++)
    {
        printf("(%d) %d\n", i, SlowFib(i));
    }
}

int main()
{
    MemoryFriendlyCalculation();
    return 0;
}