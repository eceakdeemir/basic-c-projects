#include <stdio.h>

int Add(int a, int b)
{
    return (a + b) ;
}

int main()
{
    int a, b;
    printf("Please enter 2 integers: ");
    scanf("%d %d", &a, &b);
    printf("Result : %d", Add(a, b));
}