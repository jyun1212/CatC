//ŠÔˆá‚Á‚½ƒvƒƒOƒ‰ƒ€

#include<stdio.h>
int sumPrice(int, int, int);

int main()
{
	int price;		//‹àŠz(kingaku)
	int tax;		//Á”ïÅ(zeiritsu)
	int sumprice;	//’è‰¿(nedam)

	printf_s("‹àŠz‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ = ");
	scanf_s("%d", &price);

	printf_s("\nÁ”ïÅ—¦‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(%%) = ");
	scanf_s("%d", &tax);
	
	sumPrice(price, tax, sumprice);
	printf_s("%d‚É%d%‚ÌÁ”ïÅ‚ğ‰Á‚¦‚é‚Æ%d‰~‚É‚È‚é\n", price, tax, sumprice);

	return 0;
}


int sumPrice(int price, int tax, int sumprice)
{
	sumprice = price * (1 + tax / 100);
	return 0;
}