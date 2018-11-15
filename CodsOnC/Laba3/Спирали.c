#include <stdio.h>
#define m 4
int main()
{
    int mat[m][m];
    int a=0;
    int b=1;
    int c=2;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    for (int i = 0; i < m; i++)
            {
                for (int j = a; j < m-a; j++)
                {
                    printf("%d\n", mat[a][j]);
                }
                for (int j = b; j < m-a; j++)
                {
                    printf("%d\n", mat[j][m - b]);
                }
                for (int j = m - c; j >= a; j--)
                {
                    printf("%d\n", mat[m - b][j]);
                }
                for (int j = m - c; j > a; j--)
                {
                    printf("%d\n", mat[j][a]);
                }
                a++;
                b++;
                c++;
            }

    return 0;
}
