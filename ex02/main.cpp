#include<stdio.h>

int main()
{
	int a = 2, b, c;

	b = (a == 3);
	c = (a == 2);
	
	printf_s("b=%d,c=%d\n", b, c);
	return 0;
}