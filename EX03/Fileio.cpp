#include<stdio.h>

int main()
{
	static char* str = (char*)"ABCDE";
	int i;

	for (i = 0; i <= 4; i++)
	{
		printf_s("配列の%d番目の要素は'%c'です。\n", i + 1, str[i]);
	}
	
	return 0;
}