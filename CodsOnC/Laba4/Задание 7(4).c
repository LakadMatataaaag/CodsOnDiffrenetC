#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool check(const char* str, const char* substr)
{
    int length = strlen(substr);
    int really = 0;
    while (*substr != '\0')
    {
        if (*str == *substr)
        {
            really++;
        }
        str++;
        substr++;
    }
    if (really == length)
    {
        return true;
    }
    return false;
}

char *_strstr(const char* str, const char* substr )
{
    while (*str != '\0')
    {
        if ((*str == *substr) && (check(str,substr) == 1))
        {
            return str;
        }
        else
        {
            str++;
        }
    }
    return false;
}

void find_str(char* const str, char* const substr)
{
    char* pos = _strstr(str, substr);
    if(pos)
    {
        printf("found the string '%s' in '%s' at position: %d\n", substr, str, pos - str);
    }
    else
    {
        printf("the string '%s' was not found in '%s'\n", substr, str);
    }
}

int main()
{
    char* str = "Just Test Some String";
    find_str(str, "Just");
    find_str(str, "Some");
    find_str(str, "String");
    find_str(str, "T");

    return 0;
}
