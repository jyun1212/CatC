#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>

void question_create(void);			//���쐬
void input_answer(void);			//���������
void jadge(void);					//�����̓��͂̐��딻��

int a, b, c;	//�O���[�o���ϐ�
int i;			//�C�e���[�^
int clear_num;	//������

void main()
{
	
	while (1)
	{//�������[�v
		LOOPy:
		printf_s("\n���5��\n\n");
		clear_num = 0;

		for (i = 0; i < 5; i++)
		{//5��ň��؂�
			question_create();
			input_answer();
			jadge();
			if (i >= 4)
			{
				printf_s("������%d��ł��B\n\n", clear_num);
				//�p���m�F
				printf_s("������x�H\n���(y) ��߂�(n)");

			LOOPdef:
				switch (_getch())
				{
				case 'y':
					puts("");
					goto LOOPy;
					break;

				case 'n':
					exit(0);
					break;

				default:
					goto LOOPdef;
					break;
				}
			}
		}

	}
	return;

}


void question_create(void)
{
	a = rand() % 10;
	b = rand() % 10;
	printf_s("%d ������ %d �� ", a, b);
	return;
}

void input_answer(void)
{
	scanf_s("%d", &c);
	return;
}

void jadge(void)
{
	if (c == a * b)
	{
		printf_s("�����ł��B\n");
		clear_num++;
	}
	else
	{
		printf_s("�s�����ł��B\n");
	}
	printf_s("\n");
	return;
}