#include<stdio.h>

int main()
{
	static char* str = (char*)"ABCDE";
	int i;

	for (i = 0; i <= 4; i++)
	{
		printf_s("�z���%d�Ԗڂ̗v�f��'%c'�ł��B\n", i + 1, str[i]);
	}
	
	return 0;
}