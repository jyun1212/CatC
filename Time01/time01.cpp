#include<stdio.h>

void main()
{
	int a = 12, b = 30;
	int* ptr;

	ptr = &a;			//�ϐ�a�̃A�h���X��ptr�ɑ��
	printf_s("a=%d\n", *ptr);	//*���Z�q�����邩��A�A�h���X�̒��g12��\��
	a = *ptr * 3;		//ptr�̂������e��3�{����a�ɑ��
	printf_s("a=%d\n", a);		//�A�h���X�̒��g12��3�{����36��\��

	//%x��16�i���\��(hex)
	printf_s("a�̃A�h���X��%d(%x)\n", &a, &a);		//&���Z�q�����邩��A
	printf_s("b�̃A�h���X��%d(%x)\n", &b, &b);		//���g�ł͂Ȃ��A�h���X��\��

	printf_s("ptr=%d(%x)\n", ptr, ptr);				//�����t���Ă��Ȃ�����A8�s�ڂ�
													//������ꂽ&a�̃A�h���X��\��

	return;
}