#include"insert_sort.h"

void insert_sort(datatype* a, int N)
{
	int tmp,j;
	for (int i = 1; i < N; i++)
	{
		
			
			if (a[i] < a[i - 1])
			{
				tmp = a[i];
				j = i;
				while (tmp < a[j - 1] &&j>0)
				{
					a[j] = a[j - 1];
					j--;
				}
				a[j] = tmp;



			}
		
	}
}