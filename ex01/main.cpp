#include<stdio.h>
#include<conio.h>

int main(void)
{
	const char* str = "This is a pen.";

	printf_s("%s\n", str);
	printf_s(str);
	puts("\n");
	printf_s("2番目の文字は、%cです。\n", str[1]);

	printf_s("何かキーを押してください\n");
	_getch();
	printf_s("End");
	return 0;
}