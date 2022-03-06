#include<stdio.h>

int main()
{
	printf_s("\x1b[4;31m");
	printf_s("どうです色が変わってアンダーラインもついたでしょう！\n");
	
	printf_s("\x1b[7;32m");
	printf_s("今度は反転です。\n");
	
	putchar(0x1b);
	
	printf_s("[0;36m");
	printf_s("今度は水色です\n");

	printf_s("%c%s今度は緑\n", 0x1b, "[32m");
	printf_s("%c%s%s\n", 0x1b, "[1;35m", "こんな書き方もあります\n");
	
	printf_s("\x1b[0m");

	return 0;

}