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
	strcpy_s(a.name, "HδNF");
	a.sex = 'M';

	b.age = 35;
	strcpy_s(b.name, "Γc");
	b.sex = 'F';

	printf_s("ΠυaΜ ΌO:%s Nξ%d «Κ%c\n", a.name, a.age, a.sex);
	printf_s("ΠυbΜ ΌO:%s Nξ%d «Κ%c\n", b.name, b.age, b.sex);
	puts("");

	printf_s("ΚΘΦΜΠυaΜΌOΝEEE\n");
	nextStruct();
	puts("");
	
	printf_s("mainΦΜΠυaΜΌOΝEEE\n");
	printf_s("ΠυaΜ ΌO:%s\n", a.name);

	return 0;
}

void nextStruct()
{
	struct employee a;		//mainΦΜaΖΝΩΘι

	a.age = 55;
	strcpy_s(a.name, "²‘΄");
	a.sex = 'M';

	printf("ΠυaΜ ΌO:%s\n", a.name);
	
	return;
}