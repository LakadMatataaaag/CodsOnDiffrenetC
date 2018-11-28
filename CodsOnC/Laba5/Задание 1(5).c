#include <stdio.h>

char *_strdup(const char *str)
{
	if (str == NULL)
	{
		return NULL;
	}

	char *strc = 0;
	strc = (char*)malloc((strlen(str) + 1) * sizeof(char));

	if (strc == NULL)
	{
		return NULL;
	}

	strcpy(strc, str);

	return strc;
}


int main()
{
	
	char str[12] = "some string";
	char *str_c = _strdup(str);
	printf("%s\n",(str_c));
	free(str_c);
}


