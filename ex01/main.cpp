#include<stdio.h>
#include<conio.h>

int main(void)
{
	char a, b, c;
	a = 'a';
	b = 'B';
	c = '6';

	printf_s("aには、文字%cが入っています。\n", a);
	printf_s("bには、文字%cが入っています。\n", b);
	printf_s("cには、文字%cが入っています。\n", c);
	printf_s("aには、数字%dが入っています。\n", a);
	printf_s("bには、数字%dが入っています。\n", b);
	printf_s("cには、数字%dが入っています。\n", c);

	printf_s("何かキーを押してください\n");
	_getch();
	printf_s("End");
	return 0;
}