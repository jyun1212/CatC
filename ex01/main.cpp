#include<stdio.h>
#include<conio.h>

int input_isbn(void);

int main(void)
{
	input_isbn();

	printf_s("何かキーを押してください\n");
	_getch();
	printf_s("End");
	return 0;
}

int input_isbn(void)
{
	char isbn[64];

	printf_s("ISBNを入力してください。\n");
	scanf_s("%s", isbn, 64);
	printf_s("入力された番号は、%sです。\n", isbn);
	return 0;
}