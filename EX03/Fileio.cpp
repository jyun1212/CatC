//cmd���s�e�X�g�p
//VisualStudio����f�o�b�O���s���Ă����������ʂ͓����Ȃ�
//�R�}���h�u>�t�@�C���� abc def /?�v

#include<stdio.h>

int main(int argc, char* argv[])
{
	int i;
	printf_s("\n");
	printf_s("argc ��%d�ł��B\n", argc);
	printf_s("���ɁAargv[x]�̒��g�������܂��B\n");
	for (i = 0; i < argc; i++)
	{
		printf_s("argv[%d]=%s\n", i, argv[i]);
	}
	printf_s("���̂悤�ɁAargv[0]�ɂ́A���̃v���O�������g�̖��O������܂��B\n");
	return 0;
}