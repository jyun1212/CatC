#include<stdio.h>

int main()
{
	static char* str = (char*)"ABCDE";
	int i;

	for (i = 0; i <= 4; i++)
	{
		printf_s("”z—ñ‚Ì%d”Ô–Ú‚Ì—v‘f‚Í'%c'‚Å‚·B\n", i + 1, str[i]);
	}
	
	return 0;
}