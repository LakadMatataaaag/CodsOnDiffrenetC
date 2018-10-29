
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    float d = 0;
    float x1 = 0;
    float x2 = 0;
    float x3 = 0;
    printf("Введите a\n");
    scanf("%d", &a);
    printf("Введите b\n");
    scanf("%d", &b);
    printf("Введите c\n");
    scanf("%d", &c);
    d = b * b - 4 * a * c;
    if (d < 0)
    {
        printf("Корней нет\n");
    }
    else if (d == 0)
    {
        x3 = -b / 2*a;
    }
    else
    {
        x1 = (-b + sqrt(d)) / ( 2 * a);

        x2 = (-b - sqrt(d)) / ( 2 * a);
        printf("x1 = %2.0f; x2 = %2.0f", x1, x2);
    }
    
    return 0;
 

    
   
    

}

