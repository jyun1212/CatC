#include<stdio.h>
#include<stdlib.h>
#include<process.h>

void question_create(void);			//���쐬
void input_answer(void);			//���������
void jadge(void);					//�����̓��͂̐��딻��

int a, b, c;	//�O���[�o���ϐ�

void main()
{
	printf_s("��߂�Ƃ��́A99�Ɠ��͂��Ă�������\n");
	while (1)
	{//�������[�v
		question_create();
		input_answer();
		jadge();
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
	if (c == 99)
	{
		exit(0);
	}

	return;
}

void jadge(void)
{
	if (c == a * b)
	{
		printf_s("�����ł��B\n");
	}
	else
	{
		printf_s("�s�����ł��B\n");
	}
	printf_s("\n");
	return;
}