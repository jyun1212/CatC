#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	FILE* fp;
	errno_t error;
	char str[1024];
	str[sizeof(str) - 1] = '\0';

	//�t�@�C�����J��
	error = fopen_s(&fp,"myfile.txt", "a");

	if (error != 0)
	{//���s�����璆�~
		printf_s("�t�@�C���̃I�[�v���Ɏ��s���܂����B\n");
		exit(-1);
	}

	printf_s("�t�@�C���ɒǉ�����e�L�X�g����͂��Ă��������B\n");
	printf_s("E�Ɠ��͂���ƏI���ł��B\n");

	//UTF-8���������΍�
	setlocale(LC_CTYPE, ".65001");

	while (1)
	{
		
		scanf_s("%s", str, 1024);		//�t�@�C���ɒǉ����镶�͂̓���
		if (str[0] == 'E')
		{//1�����ڂ�E�Ȃ烋�[�v�E�o
			break;
		}

		fprintf_s(fp, "%s", str);		//�t�@�C���ɏ�������
		fprintf_s(fp, "%c", '\n');		//���₷�����邽�߂ɉ��s����������
		printf_s("�t�@�C���Ƀe�L�X�g��ǉ����܂����B\n");

	}

	//�t�@�C�������
	fclose(fp);

	system("type myfile.txt");

	return 0;
}