#include<stdio.h>

void main()
{
	int a = 12;
	int* ptr;

	ptr = &a;		//�ϐ�a�̃A�h���X��ptr�ɑ��
	printf_s("a=%d\n", *ptr);
	a = *ptr * 3;	//ptr�̂������e��3�{����a�ɑ��
	printf_s("a=%d\n", a);
	return;
}