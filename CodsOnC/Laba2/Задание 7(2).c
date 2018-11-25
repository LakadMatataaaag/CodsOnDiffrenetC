float Newton(float x, float current, float next)
{
    if (current - next > 0.00001)
    {
        current = next;
        next = (current + x/current)/2.0f;
        return Newton(x, current, next);
    }
    else
    {
        return next;
    }
}

#include <stdio.h>

int main()
{
    float x;
    printf("Введите число\n");
    scanf("%f", &x);
    float y = x / 2.0f;
    float A1 = (y + x/y) / 2.0f;
    float sqr = Newton(x, y, A1);
    printf("Корень из %.0f = %.5f\n", x, sqr);
    return 0;
}
