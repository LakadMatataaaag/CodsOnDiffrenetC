#include <stdio.h>

int main()
{
    int n[10];
    int i;
    int max = 0;
    int min;
    int sum = 0;
    int check = 0;
    for (i = 0; i < 10; i++)
    {
        printf("n[%d] = ", i);
        scanf("%d ", &n[i]);
        min = n[0];
    }
    for (i = 0; i < 10; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
        }
        if(min > n[i])
        {
            min = n[i];
        }
    }
    for (i = 0; i < 10; i++)
    {
        sum += n[i];
    }
    sum = sum / 10;
    printf("Среднее арифметическое: %d\n", sum);
    printf("Максимум: %d\n", max);
    printf("Минимум: %d\n", min);

    return 0;
}