#include <stdio.h>
#define N 5
#define D 2
int fun (char a[], char b[])
{
    int i;
    int c = 0;

    for (i = 0; i < N; i++)
    {
        if (a[i] != b[i])
        {
            c++;
        }
    }

    return c;
}

int main()
{
    char* arr[] = {"StrStr", "Testtr"};
    int m = 0;
    int i;
    int j;
    int c;
    for (i = 0; i < D; i++)
    {
        for (j = 0; j < D; j++)
        {
            c = fun(arr[i],arr[j]);
            if (c > m)
            {
                m = c;
            }
        }
    }
    printf("%d\n", m);
    return 0;
}
