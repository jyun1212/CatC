//�Ԉ�����v���O����

#include<stdio.h>
int sumPrice(int, int, int);

int main()
{
	int price;		//���z(kingaku)
	int tax;		//�����(zeiritsu)
	int sumprice;	//�艿(nedam)

	printf_s("���z����͂��Ă������� = ");
	scanf_s("%d", &price);

	printf_s("\n����ŗ�����͂��Ă�������(%%) = ");
	scanf_s("%d", &tax);
	
	sumPrice(price, tax, sumprice);
	printf_s("%d��%d%�̏���ł��������%d�~�ɂȂ�\n", price, tax, sumprice);

	return 0;
}


int sumPrice(int price, int tax, int sumprice)
{
	sumprice = price * (1 + tax / 100);
	return 0;
}