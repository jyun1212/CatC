#include<stdio.h>
#include<string.h>

void nextStruct(void);

struct employee
{
	int age;
	char name[32];
	char sex;
};

int main()
{
	struct employee a, b;
	
	a.age = 32;
	strcpy_s(a.name, "�H��N�F");
	a.sex = 'M';

	b.age = 35;
	strcpy_s(b.name, "�����Óc");
	b.sex = 'F';

	printf_s("�Ј�a�� ���O:%s �N��%d ����%c\n", a.name, a.age, a.sex);
	printf_s("�Ј�b�� ���O:%s �N��%d ����%c\n", b.name, b.age, b.sex);
	puts("");

	printf_s("�ʂȊ֐��̎Ј�a�̖��O�́E�E�E\n");
	nextStruct();
	puts("");
	
	printf_s("main�֐��̎Ј�a�̖��O�́E�E�E\n");
	printf_s("�Ј�a�� ���O:%s\n", a.name);

	return 0;
}

void nextStruct()
{
	struct employee a;		//main�֐���a�Ƃ͈قȂ�

	a.age = 55;
	strcpy_s(a.name, "��������");
	a.sex = 'M';

	printf("�Ј�a�� ���O:%s\n", a.name);
	
	return;
}