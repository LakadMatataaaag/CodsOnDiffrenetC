#include <stdio.h>

#define N 3

int main()
{
    int arr[N][N];
    int i, j, k, g;
    int sumv = 0;
    int sumg = 0;
    int sumn = 0;
    int sumdop = 0;
    int sumdop2 = 0;
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
        if (j == N-1)
        {
            j = N-i-1;
            i = -1;
            if (sumv > sumdop)
            {

                sumdop = sumv;

            }
            sumv = 0;
        }
    }

    for (i = 1, j = 0; i < N, j < N; i++, j++)
    {
        sumn += arr[i][j];
        if (i == N-1)
        {
            i = N-j-1;
            j = -1;
            if (sumn > sumdop2)
            {
                sumdop2 = sumn;
            }
            sumn = 0;
        }
    }
    if (sumg > sumdop && sumg > sumdop2)
    {
        printf("Сумма на главной диагонали = %d\nMax Sum на верхней побочной = %d\nMax sum на нижней побочной = %d\n", sumg, sumdop, sumdop2);
        printf("Ответ - %d\n", sumg);
    }
    else if (sumdop > sumg && sumdop > sumdop2)
    {
        printf("Сумма на главной диагонали = %d\nMax Sum на верхней побочной = %d\nMax sum на нижней побочной = %d\n", sumg, sumdop, sumdop2);
        printf("Ответ - %d\n", sumdop);
    }
    else if (sumdop2 > sumg && sumdop2 > sumdop)
    {
        printf("Сумма на главной диагонали = %d\nMax Sum на верхней побочной = %d\nMax sum на нижней побочной = %d\n", sumg, sumdop, sumdop2);
        printf("Ответ - %d\n", sumdop2);
    }




    return 0;



}
