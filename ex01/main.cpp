#include<stdio.h>
#include<conio.h>

int main(void)
{
	int a, b;
	printf_s("a,b����͂��Ă��������B\n");
	scanf_s("%d %d", &a, &b);
	printf_s("a=%d b=%d\n", a, b);
	printf_s("a+b=%d\n", a + b);
	printf_s("�����L�[�������Ă�������\n");
	
	_getch();
	printf_s("End");
	return 0;
}