unsigned int str_length(const char* s)
{
    int i = 0;
    do
    {
        i++;
    } while(s[i]);
    return i;
}



#include <stdio.h>

int main()
{
    char arr[100];
    scanf("%s", &arr);
    printf("%d\n", str_length(arr));

    return 0;
}
