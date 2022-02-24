#include<stdio.h>

int main()
{
	int i, a[4], * ptr;

	a[0] = 15;
	a[1] = 20;
	a[2] = 25;
	a[3] = 10;

	ptr = &a[0];
	for (i = 0; i <= 3; i++)
	{
		printf_s("a[%d]=%d\n", i, a[i]);

		printf_s("*(&a[%d])=%d\n", i, *(&a[i]));
		
		printf_s("*(&a[0]+%d)=%d\n", i, *(&a[0] + i));
		
		printf_s("*(ptr+%d)=%d\n", i, *(ptr + i));
		
		printf_s("*(a+%d)=%d\n", i, *(a + i));
	}

	return 0;
}