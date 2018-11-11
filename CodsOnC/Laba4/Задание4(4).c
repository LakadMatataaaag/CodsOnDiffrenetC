void reverse(char *s)
{
	if (*s)
		reverse(s + 1);
	else
		return;
	printf("%c", *s);
}



#include <stdio.h>

int main()
{
    char a[] = "Check Str";
    reverse(a);

    return 0;
}
