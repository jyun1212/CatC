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
	strcpy_s(a.name, "粂井康孝");
	a.sex = 'M';

	b.age = 35;
	strcpy_s(b.name, "服屁津田");
	b.sex = 'F';

	printf_s("社員aの 名前:%s 年齢%d 性別%c\n", a.name, a.age, a.sex);
	printf_s("社員bの 名前:%s 年齢%d 性別%c\n", b.name, b.age, b.sex);
	puts("");

	printf_s("別な関数の社員aの名前は・・・\n");
	nextStruct();
	puts("");
	
	printf_s("main関数の社員aの名前は・・・\n");
	printf_s("社員aの 名前:%s\n", a.name);

	return 0;
}

void nextStruct()
{
	struct employee a;		//main関数のaとは異なる

	a.age = 55;
	strcpy_s(a.name, "佐藤清澄");
	a.sex = 'M';

	printf("社員aの 名前:%s\n", a.name);
	
	return;
}