#include<stdio.h>

int main()
{
	int i,j;	//iterator
	int count_border = 0;

	for (i = 1; i <= 9; i++)
	{
		printf_s("%2d ", i);	//%2d��i��2���\��
		count_border += 3;
	}
	printf_s("\n");

	for (i = 1; i <= count_border; i++)
	{
		printf_s("-");
	}
	printf_s("\n");

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf_s("%2d ", i * j);
			if (j == 9)
			{//���s
				printf_s("\n");
			}
		}
	}
	return 0;
}