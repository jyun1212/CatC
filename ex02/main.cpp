#include<stdio.h>

int main()
{
	int i = 6, j = 6;

	printf_s("i=%d\n", i++);	//���̎��_��i��6
	printf_s("i=%d\n", i);		//i��7�ɂȂ��Ă���
	printf_s("j=%d\n", ++j);	//j�͂��̎��_��7
	printf_s("j=%d\n", j);		//7����ύX�Ȃ�
	return 0;
}