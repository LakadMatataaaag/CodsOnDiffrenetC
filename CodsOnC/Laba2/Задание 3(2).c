#include <stdio.h>


int Fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return Fibo(n-1) + Fibo(n-2);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", Fibo(n));
    return 0;
}