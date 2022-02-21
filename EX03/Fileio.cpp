#include<stdio.h>
#include<string.h>

int main()
{
	int aryNum;		//イテレータ
	int aryNumMax;	//配列の要素数


	printf_s("例題1\n");
	static int a[4][2] = { 8, 7, 6, 5, 4, 3, 2, 1 };

	for (int ary_line = 0; ary_line < 4; ary_line++)
	{
		for (int ary_ele = 0; ary_ele < 2; ary_ele++)
		{
			printf_s("%d", a[ary_line][ary_ele]);
		}
		puts("");
	}

	printf_s("\n例題2\n");
	static char b[] = { 'A','B','C','D' };
	aryNumMax = sizeof b / sizeof b[0];

	for (aryNum = 0; aryNum < aryNumMax; aryNum++)
	{
		printf_s("%c", b[aryNum]);
	}

	printf_s("\n例題3\n");
	const char* str = "ABCD";

	aryNumMax = strlen(str);

	for (aryNum = 0; aryNum < aryNumMax; aryNum++)
	{
		printf_s("str[%d]='%c'\n", aryNum, str[aryNum]);
	}


	return 0;
}