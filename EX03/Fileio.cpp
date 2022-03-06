#include <time.h>
#include<conio.h>
#include <stdio.h>

struct tm newtime;
time_t aclock;

int main(void)
{
	char now_time[32];
	errno_t errNum;

	while (!_kbhit())
	{
		time(&aclock);
		localtime_s(&newtime, &aclock);

		errNum = asctime_s(now_time, 32, &newtime);
		if (errNum != 1)
		{
			printf_s("\x1b[4;1H");
			printf_s("now_time=%s\n", now_time);
		}
	}

	return 0;
}