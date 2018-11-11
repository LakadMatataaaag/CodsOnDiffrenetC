#include <stdio.h>
#define n 2
#define m 3
#define g 3
#define l 2
#define p 2
#define o 2
int main()
{
    int u = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int h = 0;
    int t = 0;
    int A[n][m];
    int B[g][l];
    int C[p][o];
    printf("Заполните матрицу A:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    printf("Заполните матрицу B:\n");
    for (h = 0; h < g; h++)
        for (t = 0; t < l; t++)
        {
            scanf("%d", &B[h][t]);
        }
    for (i = 0; i <= n; i++)
        for (j = 0; j <= m; j++)
        {
            C[i][j] = 0;
            for (k = 0; k <= l; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    
    for (i = 0; i < n; i++)
        {
            for (j = 0; j < l; j++)
            printf("%d ", C[i][j]);
        printf("\n");
        }
            

    
        
    
    
    return 0;
}
