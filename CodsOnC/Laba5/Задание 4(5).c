#include <stdio.h>

int find_index(const int * array, int size, int(*predicate)(int))
{
	if (array == NULL || predicate == NULL || size <= 0)
	{
		return -1;
	}

	int index = -1;

	for (int i = 0; i < size; i++)
	{
		if (predicate(*(array + i)))
		{
			index = i;
			break;
		}
	}

	return index;
}

int first_pr(int num)
{
	return num % 2 == 0;
}

int sec_pr(int num)
{
	return num > 42;
}

int main()
{
	int n = 5;
	int* arr = (int*)calloc(sizeof(int), n);

	for (int i = 0; i < n; i++)
	{
		arr[i] = i * 20;
	}

	int test = find_index(arr, n, first_pr);

	printf("%d", test);

	free(arr);
	return 0;
}
