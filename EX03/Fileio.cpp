#include<stdio.h>
#include<time.h>

int main()
{
	time_t present_tm;	//time_t == long
	struct tm my_time;	//tm�\���̂ւ̃|�C���^

	time(&present_tm);	//�o�ߎ��Ԏ擾

	localtime_s(&my_time, &present_tm);

	printf_s("%ld/%ld/%ld %ld:%ld:%ld\n",
		my_time.tm_year + 1900, my_time.tm_mon + 1, my_time.tm_mday,
		my_time.tm_hour, my_time.tm_min, my_time.tm_sec);

	return 0;
}