//間違ったプログラム

#include<stdio.h>
int sumPrice(int, int, int);

int main()
{
	int price;		//金額(kingaku)
	int tax;		//消費税(zeiritsu)
	int sumprice;	//定価(nedam)

	printf_s("金額を入力してください = ");
	scanf_s("%d", &price);

	printf_s("\n消費税率を入力してください(%%) = ");
	scanf_s("%d", &tax);
	
	sumPrice(price, tax, sumprice);
	printf_s("%dに%d%の消費税を加えると%d円になる\n", price, tax, sumprice);

	return 0;
}


int sumPrice(int price, int tax, int sumprice)
{
	sumprice = price * (1 + tax / 100);
	return 0;
}