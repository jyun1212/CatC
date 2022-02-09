#include<stdio.h>
#include<process.h>
#include<locale.h>

int main()
{
	FILE* fp;
	errno_t error;
	char str[256];
	str[sizeof(str) - 1] = '\0';

	//ファイルを開く
	error = fopen_s(&fp,"test.txt", "r");

	if (error != 0)
	{//失敗したら中止
		printf_s("ファイルのオープンに失敗しました。\n");
		exit(-1);
	}

	//UTF-8文字化け対策
	setlocale(LC_CTYPE, ".65001");
	while (fscanf_s(fp, "%s", str,256) != EOF)
	{//ファイルの最後まで到達しない限り繰り返す
		printf_s(str);
		puts("");	//改行
	}

	//ファイルを閉じる
	fclose(fp);

	return 0;
}