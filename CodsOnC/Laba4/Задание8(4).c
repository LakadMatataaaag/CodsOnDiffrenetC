int _atoi(const char *s)
{
    int n = 0;
    if (*s == '-' || *s == '+')
    {
        s++;
    }
    while (*s != '\0')
    {
        if (*s >= '0' && *s <= '9')
        {
            n *= 10;
            n += *s++;
            n -= '0';
        }
        else
        {
            return 0;
        }
    }
    return n;
}


#include <stdio.h>

int main()
{
    printf("%d\n",_atoi("-10bsf"));

    return 0;
}
