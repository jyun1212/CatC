#include<stdio.h>

int main()
{
	int a[3];

	a[0] = 10;
	a[1] = 15;
	a[2] = 20;
	a[3] = 30;	//���ゾ�ƃG���[���o�Ď��s�s��

	for (int i = 0; i <= 3; i++)
	{
		printf_s("a[%d]= %d\n", i, a[i]);
	}














	return 0;
}