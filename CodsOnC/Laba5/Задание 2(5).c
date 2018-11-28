#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return NULL;
	}

	int ** matrix = (int**)malloc(height * sizeof(int));

	if (matrix == NULL)
	{
		return NULL;
	}

	for (int i = 0; i < height; i++)
	{
		int *mas = *(matrix + i) = (int*)malloc(width * sizeof(int));

		if (mas == NULL)
		{
			free_grid(matrix, i);
			return NULL;
		}

		for (int j = 0; j < width; j++)
		{
			*(*(matrix + i) + j) = 0;
		}
	}
	return matrix;
}
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (int i = 0; i < height; i++)
	{
		free(*(grid + i));
	}

	free(grid);
}

int main()
{
	int w, h = 0;
	scanf("%d", &w);
	scanf("%d", &h);
	int **p;
	p = alloc_grid(w, h);

	int i, j;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			printf("%d", *(*(p + i) + j));
		}
		printf("\n");
	}

	return 0;
}
