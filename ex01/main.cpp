#include<stdio.h>
#include<conio.h>

int main(void)
{
	char a, b, c;
	a = 'a';
	b = 'B';
	c = '6';

	printf_s("a�ɂ́A����%c�������Ă��܂��B\n", a);
	printf_s("b�ɂ́A����%c�������Ă��܂��B\n", b);
	printf_s("c�ɂ́A����%c�������Ă��܂��B\n", c);
	printf_s("a�ɂ́A����%d�������Ă��܂��B\n", a);
	printf_s("b�ɂ́A����%d�������Ă��܂��B\n", b);
	printf_s("c�ɂ́A����%d�������Ă��܂��B\n", c);

	printf_s("�����L�[�������Ă�������\n");
	_getch();
	printf_s("End");
	return 0;
}