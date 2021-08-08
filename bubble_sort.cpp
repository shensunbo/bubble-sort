#include"bubble_sort.h"

void Bubble_Sort(datatype a[], int N)
{
	datatype tmp;
	int flag=0;     //交换标志位
	int lastConv;  //记录最后一次发生交换的位置
	int last=N-1;

	for (int i = 0; i<N; i++)
	{
		flag = 0;
		for (int j = 0; j < last; j++)//
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;

				flag = 1;
				lastConv = j;
			}
		}
		last = lastConv;//lastConv后面的数据已有序
		if (0 == flag)
			break;            //没有数据发生交换，排序已完成
	}
}

