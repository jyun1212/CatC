#include<stdio.h>

int main()
{
	printf_s("\x1b[4;31m");
	printf_s("�ǂ��ł��F���ς���ăA���_�[���C���������ł��傤�I\n");
	
	printf_s("\x1b[7;32m");
	printf_s("���x�͔��]�ł��B\n");
	
	putchar(0x1b);
	
	printf_s("[0;36m");
	printf_s("���x�͐��F�ł�\n");

	printf_s("%c%s���x�͗�\n", 0x1b, "[32m");
	printf_s("%c%s%s\n", 0x1b, "[1;35m", "����ȏ�����������܂�\n");
	
	printf_s("\x1b[0m");

	return 0;

}