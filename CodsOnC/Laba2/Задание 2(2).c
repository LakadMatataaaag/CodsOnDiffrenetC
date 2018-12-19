#include <stdio.h>

int invert(int x, int p, int n) // K&R. Глава 2.
{
    return x ^ ( ~( ~0 << n) << (str(x) - n) >> (p - 1) );
}

int dv(int a) // Функция перевода в двоичный вид. Книга - Герберта Шилдта по С++
{
    if (a == 0)
    {
        return 0;
    }
    else
    {
        int b = dv(a / 2);
        return b * 10 + a % 2;
    }
}

int str(int x) // Счетчик цифр чисоа в 2 системе
{
    int a = dv(x);
    int s = 0;
    while (a)
    {
        s++;
        a /= 10;
    }
    return s;
}
 
int main()
{
    int x, p, n;
    scanf("%d", &x); // Число
    printf("%d\n", dv(x)); // Вывод числа в двоичной системе счисления
    scanf("%d", &p); // Позиция
    scanf("%d", &n); // Количество битов
    printf("Ответ: %d\n", invert(x, p, n));
    printf("Ответ в 2 системе счисления: %d\n", dv(invert(x, p, n)));

    return 0;
}
