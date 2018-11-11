void magic(int *a)
{
    *a = 42;
}



#include <stdio.h>

int main()
{
    int a = 45;

    printf("До %d\n",a);
    magic(&a);
    printf("После %d\n",a);

    return 0;
}
