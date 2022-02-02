#include<stdio.h>

int main()
{
	int i = 6, j = 6;

	printf_s("i=%d\n", i++);	//‚±‚Ì“_‚Åi‚Í6
	printf_s("i=%d\n", i);		//i‚Í7‚É‚È‚Á‚Ä‚¢‚é
	printf_s("j=%d\n", ++j);	//j‚Í‚±‚Ì“_‚Å7
	printf_s("j=%d\n", j);		//7‚©‚ç•ÏX‚È‚µ
	return 0;
}