#include"insert_sort.h"

void insert_sort(datatype* a, int N)
{
	int tmp,j;
	for (int i = 1; i < N; i++)
	{
		
			
			if (a[i] < a[i - 1])
			{
				tmp = a[i];
				j = i-1;   //指向有序序列最后一个元素
				while (tmp < a[j] &&j>=0)
				{
					a[j+1] = a[j];  //后移一位
					j--;
				}
				a[j+1] = tmp; 



			}
		
	}
}
