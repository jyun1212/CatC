#include<stdio.h>
#include<conio.h>
#include<string.h>


int input_isbn(void);
int check_isbn(char*);

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
	int deci;			//decision(����)

	printf_s("ISBN����͂��Ă��������B\n");
	scanf_s("%s", isbn, 64);
	deci = check_isbn(isbn);

	switch (deci)
	{
	case -2:
		printf_s("���̓~�X�ł�\n");
		break;
	case -1:
		printf_s("�s���ԍ��ł�\n");
		break;
	case 0:
		printf_s("�������ԍ��ł��B\n");
		break;
	}
	return 0;
}

int check_isbn(char* digit)		//����
{
	int sumNumber;		//���v
	int number[10];		//���l
	int i;				//�C�e���[�^(isbn������)

	if (strlen(digit) != 10)
	{//������̒������`�F�b�N
	//10�����łȂ���΁|2��Ԃ�
		return -2;
	}

	sumNumber = 0;

	for (i = 0; i <= 8; i++)
	{
		number[i] = digit[i] - 48;
	}

	for (i = 0; i <= 8; i++)
	{
		sumNumber = sumNumber + number[i] * (10 - i);
	}
	if (digit[9] == 'X' || digit[9] == 'x')
	{//������X�̏ꍇ
		sumNumber += 10;
	}
	else
	{
		sumNumber = sumNumber + digit[9] - 48;
	}

	printf_s("���v��%d\n", sumNumber);
	
	if (sumNumber % 11 == 0)
	{//���v��11�̔{���Ȃ�0
		return 0;
	}
	else
	{//�Ⴄ�Ȃ�-1��Ԃ�
		return -1;
	}


}