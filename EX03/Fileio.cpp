#include<stdio.h>
#include<process.h>
#include<locale.h>

int main()
{
	FILE* fp;
	errno_t error;
	char str[256];
	str[sizeof(str) - 1] = '\0';

	//�t�@�C�����J��
	error = fopen_s(&fp,"test.txt", "r");

	if (error != 0)
	{//���s�����璆�~
		printf_s("�t�@�C���̃I�[�v���Ɏ��s���܂����B\n");
		exit(-1);
	}

	//UTF-8���������΍�
	setlocale(LC_CTYPE, ".65001");
	while (fscanf_s(fp, "%s", str,256) != EOF)
	{//�t�@�C���̍Ō�܂œ��B���Ȃ�����J��Ԃ�
		printf_s(str);
		puts("");	//���s
	}

	//�t�@�C�������
	fclose(fp);

	return 0;
}