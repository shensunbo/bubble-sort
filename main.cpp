#include"bubble_sort.h"
#include<stdio.h>

int main()
{
	int a[10];
	int L = sizeof(a) / sizeof(*a);
	

	for (int i = 0; i < L; i++)
	{
		scanf("%d",a+i);
		while (getchar() != '\n')
			continue;
	}
	for (int i = 0; i < L; i++)
		printf("%d ", *(a + i));
	printf("\n");

	Bubble_Sort(a,L);

	for (int i = 0; i < L; i++)
		printf("%d ", *(a + i));
	printf("\n");

	return 0;
}