#include<stdio.h>

int main()
{
	int i,j;	//iterator
	
	for (i = 1; i <= 9; i++)
	{
		printf_s("%2d ", i);	//%2d‚Åi‚ª2Œ…•\Ž¦
	}
	printf_s("\n");
	printf_s("---------------------------\n");

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf_s("%2d ", i * j);
			if (j == 9)
			{//‰üs
				printf_s("\n");
			}
		}
	}
	return 0;
}