#include<stdio.h>

int main()
{
	static char s[] = "ABCDE";
	char* ptr;

	ptr = s;	//s[0]のアドレスをptrに代入
	while (1)
	{
		putchar(*ptr++);
		if (*ptr == '\0')
		{
			break;
		}
	}

	return 0;
}