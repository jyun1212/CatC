#include<stdio.h>
#include<time.h>

void main()
{
	int i = 1;		//iterator
	time_t t1, t2;
	time(&t1);		//t1�ɕ\���O�̕b��(1970/1/1~����)���i�[
	
	while (i <= 5000)
	{//5000�܂�
		printf_s("%d,", i++);
	}
	time(&t2);		//t2�ɕ\����̕b�����i�[
	printf_s("\ntime1=%ld time2=%ld\n", t1, t2);
	printf_s("�����������Ԃ́A%d�b�ł��B\n", t2 - t1);
	return;

}