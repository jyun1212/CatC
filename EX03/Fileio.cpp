#include<stdio.h>

int main()
{
	int i;

	for (i = 65; i <= 122; i++)
	{//putchar�ɂ�萮������A�X�L�[�R�[�h���Q�Ƃ������o��
		putchar(i);
		putchar(',');

		if ((i - 64) % 10 == 0)
		{//10�����ŉ��s
			putchar('\n');
		}
	}

	return 0;
}