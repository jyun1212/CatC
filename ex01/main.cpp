#include<stdio.h>
#include<conio.h>

int input_isbn(void);

int main(void)
{
	input_isbn();

	printf_s("�����L�[�������Ă�������\n");
	_getch();
	printf_s("End");
	return 0;
}

int input_isbn(void)
{
	char isbn[64];

	printf_s("ISBN����͂��Ă��������B\n");
	scanf_s("%s", isbn, 64);
	printf_s("���͂��ꂽ�ԍ��́A%s�ł��B\n", isbn);
	return 0;
}