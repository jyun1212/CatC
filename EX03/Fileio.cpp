#include<stdio.h>
#include<time.h>
#include<Time.h>

int main()
{
	time_t present_tm;	//long�ƍl���ėǂ�
	struct tm *my_time;	//tm�\���̂ւ̃|�C���^
	char* now_time;

	errno_t error;
	error = localtime_s(&now_time, &present_tm);

	if (error != 0)
	{
		time(&present_tm);	//�o�ߎ��Ԏ擾
		my_time = localtime_s(&now_time, &present_tm);

		printf_s("%d %d %d %d %d %d %d",
			now_time.tm_year, now_time.tm_mon, now_time.tm_mday,
			now_time.tm_hour, now_time.tm_min, now_time.tm_sec);
	}

	return 0;
}