#include<stdio.h>
#include<conio.h>

int main(void)
{
	int a, b;
	int *p, *q;
	p = &a;
	q = &b;

	printf_s("a,b����͂��Ă��������B\n");
	scanf_s("%d %d", p, q);
	printf_s("a=%d b=%d\n", *p, *q);
	printf_s("a+b=%d\n", *p + *q);
	printf_s("�����L�[�������Ă�������\n");
	
	_getch();
	printf_s("End");
	return 0;
}