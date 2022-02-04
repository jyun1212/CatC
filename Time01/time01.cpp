#include<stdio.h>
#include<time.h>

void main()
{
	int i = 1;		//iterator
	time_t t1, t2;
	time(&t1);		//t1‚É•\¦‘O‚Ì•b”(1970/1/1~Œ»İ)‚ğŠi”[
	
	while (i <= 5000)
	{//5000‚Ü‚Å
		printf_s("%d,", i++);
	}
	time(&t2);		//t2‚É•\¦Œã‚Ì•b”‚ğŠi”[
	printf_s("\ntime1=%ld time2=%ld\n", t1, t2);
	printf_s("‚©‚©‚Á‚½ŠÔ‚ÍA%d•b‚Å‚·B\n", t2 - t1);
	return;

}