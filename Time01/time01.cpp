#include<stdio.h>

void main()
{
	int a = 12;
	int* ptr;

	ptr = &a;		//変数aのアドレスをptrに代入
	printf_s("a=%d\n", *ptr);
	a = *ptr * 3;	//ptrのさす内容を3倍してaに代入
	printf_s("a=%d\n", a);
	return;
}