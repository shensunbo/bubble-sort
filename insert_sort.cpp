#include"insert_sort.h"

void insert_sort(datatype* a, int N)
{
	int tmp;
	for (int i = 1; i < N; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (a[j] > a[j - 1])
				break;
			if (a[j] < a[j - 1])
			{
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;

			}
			
		}
	}
}