#include <stdio.h>

void sravnenie(int *a,int *j, int *i, int *N, int *b)
{
	if (*j == *N - 1)
	{
		*j = *N - *i - 1;
		*i = -1;

		if (*a > *b)
		{
			*b = *a;
		}
		*a = 0;
	}
}

int main()
{
    int N = 0;
    printf("Введите количество столбцов и строк матрицы N*N\n");
    scanf("%d", &N);
    int arr[N][N];
    int i, j, k, g;
    int p,r;
    int sum = 0;
    int sumabs = 0;
    int sumv = 0;
    int sumg = 0;
    int sumn = 0;
    int sumdop = 0;
    int sumdop2 = 0;
    printf("Заполните матрицу\n");
    for (i=0; i<N; i++)
    {
        for (j = 0; j<N; j++)
        {
            scanf("%d", &arr[i][j]);
            if(i == j)
            {
                sumg += arr[i][j];
            }
        }
    }

    for (i = 0, j = 1; i < N, j < N; i++,j++)
    {
        sumv += arr[i][j];
        sravnenie(&sumv, &j, &i, &N, &sumdop);
    }

    for (i = 1, j = 0; i < N, j < N; i++, j++)
    {
        sumn += arr[i][j];
        sravnenie(&sumn, &i, &j, &N, &sumdop2);
    }
    
    printf("Сумма на главной диагонали = %d\nMax Sum на верхней побочной = %d\nMax sum на нижней побочной = %d\n", sumg, sumdop, sumdop2);
    if (sumg > sumdop && sumg > sumdop2)
    {
        printf("Ответ - %d\n", sumg);
    }
    else if (sumdop > sumg && sumdop > sumdop2)
    {
        printf("Ответ - %d\n", sumdop);
    }
    else if (sumdop2 > sumg && sumdop2 > sumdop)
    {
        printf("Ответ - %d\n", sumdop2);
    }
    
    return 0;

}