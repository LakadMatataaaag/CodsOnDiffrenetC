void swap_int(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}



#include <stdio.h>

int main()
{
    int a = 45;
    int b = 54;
    printf("До вычисления %d и %d\n",a,b);
    swap_int(&a,&b);
    printf("После вычисления %d и %d\n",a,b);

    return 0;
}
