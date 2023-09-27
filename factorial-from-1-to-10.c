#include <stdio.h>

int fact(int n)
{
    int i,result;
    result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

int main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d! = %d\n",i,fact(i));
    }
}