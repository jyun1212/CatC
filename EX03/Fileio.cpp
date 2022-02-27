#include<stdio.h>

int main()
{
	int i;

	for (i = 65; i <= 122; i++)
	{//putcharにより整数からアスキーコードを参照し文字出力
		putchar(i);
		putchar(',');

		if ((i - 64) % 10 == 0)
		{//10文字で改行
			putchar('\n');
		}
	}

	return 0;
}