#include<stdio.h>

void main()
{
	int a = 12, b = 30;
	int* ptr;

	ptr = &a;			//変数aのアドレスをptrに代入
	printf_s("a=%d\n", *ptr);	//*演算子があるから、アドレスの中身12を表示
	a = *ptr * 3;		//ptrのさす内容を3倍してaに代入
	printf_s("a=%d\n", a);		//アドレスの中身12を3倍した36を表示

	//%xは16進数表示(hex)
	printf_s("aのアドレスは%d(%x)\n", &a, &a);		//&演算子があるから、
	printf_s("bのアドレスは%d(%x)\n", &b, &b);		//中身ではなくアドレスを表示

	printf_s("ptr=%d(%x)\n", ptr, ptr);				//何も付いていないから、8行目で
													//代入された&aのアドレスを表示

	return;
}