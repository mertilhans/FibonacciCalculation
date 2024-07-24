#include <stdio.h>
#include <stdlib.h>

long *memo;

void    initialize_memo(int size) 
{
    memo = (long *)malloc (size * sizeof(long));
    for (int i = 0; i < size; i++)
    {
        memo[i] = -1;
    }
    memo[0] = 0;
    memo[1] = 1;
}

long FastFib(int n)
{
    if(memo[n] != -1) 
    {
        return memo[n];
    }
    memo[n] = FastFib(n - 1) + FastFib(n - 2);
    return memo[n];
}

void FreeMemo()
{
    free(memo);
}
void    FastCalculation() 
{
    for (int i = 0; i <= 100; i++)
    {
        printf("(%d) %ld\n",i, FastFib(i));
    }
}
int main()
{
    initialize_memo(101);
    FastCalculation();
    FreeMemo();
    return 0;
}