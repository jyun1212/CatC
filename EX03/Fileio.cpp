#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void saikoro(int*, int*);

int main()
{
	long bet;		//�|����
	long money;		//������
	int cho_han;
	int dice1, dice2;
	int result;
	int cont;		//continue
	char result_str[8];

	printf_s("���Ȃ��̏������́H -->");
	scanf_s("%ld", &money);
	puts("");

	while (1)
	{
		printf_s("�|��������͂��Ă��������B-->");
		scanf_s("%ld", &bet);

		printf_s("\n��=0,��=1 -->");
		scanf_s("%d", &cho_han);
		puts("");

		saikoro(&dice1, &dice2);
		result = (dice1 + dice2) % 2;

		if (result == 0)
		{//�o�ڂ̍��v�������Ȃ�
			strcpy_s(result_str, "��");
		}
		else
		{//�o�ڂ̍��v����Ȃ�
			strcpy_s(result_str, "��");
		}

		printf_s("\n�T�C�R��1=%d �T�C�R��2=%d ���ʂ�%s�ł���\n", dice1, dice2, result_str);

		if (cho_han == result)
		{
			money += bet;
		}
		else
		{
			money -= bet;
			if (money <= 0L)
			{
				printf_s("��������������܂���\n");
				printf_s("���Ȃ��͎��ɂ܂���\n");
				break;
			}
		}

		printf_s("\n���Ȃ��̎�������%ld�~�ł�\n", money);

		printf_s("�����܂����H[yes=1,no=0]");
		scanf_s("%d", &cont);
		if (cont == 0)
		{
			break;
		}

	}

	printf_s("\n�I���ł�\n");
	return 0;
}

void saikoro(int* a, int* b)
{
	srand((unsigned)time(NULL));
	*a = rand() % 6 + 1;
	*b = rand() % 6 + 1;
	return;
}