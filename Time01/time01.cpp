#include<stdio.h>
#include<time.h>

void main()
{
	int i = 1;		//iterator
	time_t t1, t2;
	time(&t1);		//t1�ɕ\���O�̕b�����i�[
	
	while (i <= 5000)
	{
		printf_s("%d,", i++);
	}
	time(&t2);		//t2�ɕ\����̕b�����i�[
	printf("\ntime1=%ld time2=%ld\n", t1, t2);
}