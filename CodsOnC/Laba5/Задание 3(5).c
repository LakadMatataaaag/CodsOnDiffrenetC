#include <stdio.h>

const int BUF_SIZE = 100;

char **strsplit(const char *str)
{
	if (str == NULL || !str[0])
		return NULL;

	int words_count = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			words_count++;
			for (; str[i] != ' '; i++);
		}
	}

	char ** strs = (char**)malloc(words_count * sizeof(char*));
	char buff[BUF_SIZE];
	int k = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			int j = 0;
			for (j = 0; str[i] != ' '; j++, i++)
			{
				buff[j] = str[i];
			}
			if (j >= BUF_SIZE)
			{
				free_grid(strs, k);
				return NULL;
			}

			buff[j] = '\0';
			*(strs + k) = (char*)malloc((strlen(buff) + 1) * sizeof(char));
			strcpy(*(strs + k), buff);
			k++;
		}
	}
	*(strs + k) = (char*)malloc((strlen(buff) + 1) * sizeof(char));
	strcpy(*(strs + k), "");
	return strs;
}

void free_grid(char **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;

	for (int i = 0; i < height; i++)
	{
		free(*(grid + i));
	}

	free(grid);
}

int main()
{
	char **test = strsplit("Hello  world  Nya  ");

	for (int i = 0; *test[i]; i++)
	{
		printf("%s\n", test[i]);
	}

	return 0;
}
