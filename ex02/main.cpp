#include<stdio.h>

int main()
{
	int i = 6, j = 6;

	printf_s("i=%d\n", i++);	//この時点でiは6
	printf_s("i=%d\n", i);		//iは7になっている
	printf_s("j=%d\n", ++j);	//jはこの時点で7
	printf_s("j=%d\n", j);		//7から変更なし
	return 0;
}