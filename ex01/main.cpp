#include<stdio.h>
#include<conio.h>

int main(void)
{
	const char* str = "This is a pen.";

	printf_s("%s\n", str);
	printf_s(str);
	puts("\n");
	printf_s("2�Ԗڂ̕����́A%c�ł��B\n", str[1]);

	printf_s("�����L�[�������Ă�������\n");
	_getch();
	printf_s("End");
	return 0;
}