#include<stdio.h>
#include<time.h>

void main()
{
	int i = 1;		//iterator
	time_t t1, t2;
	time(&t1);		//t1に表示前の秒数(1970/1/1~現在)を格納
	
	while (i <= 5000)
	{//5000まで
		printf_s("%d,", i++);
	}
	time(&t2);		//t2に表示後の秒数を格納
	printf_s("\ntime1=%ld time2=%ld\n", t1, t2);
	printf_s("かかった時間は、%d秒です。\n", t2 - t1);
	return;

}