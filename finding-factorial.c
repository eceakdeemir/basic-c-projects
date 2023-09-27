#include <stdio.h>

int Fact(int n)
    {
        int i,result;
        result = 1;
        for(i = 1; i <= n; i++)
        {
            result = result * i;
        }
        return result;
    }

int main()
{
    int a;
    printf("*FACTORIAL FINDER PROGRAM*\n");
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("%d",Fact(a));
}