void check(int *a, int *b)
{
    if (*a > *b)
    {
        *b = *a;
    }
}

int mod(int a) 
{
    if (a >= 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int sum = 0;
    int max = 0;
    int N = 0;
    printf("Введите количество столбцов и строк матрицы N*N\n");
    scanf("%d", &N);
    int arr[N][N];
    printf("Введите матрицу\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] % 2 != 0)
            {
                sum += mod(arr[i][j]);
            }
            else
            {
                sum = 0;
            }
            check(&sum, &max);
        }
    }
    printf("Максимум  = %d\n", max);

    return 0;
}
