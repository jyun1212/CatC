#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	FILE* fp;
	errno_t error;
	char str[1024];
	str[sizeof(str) - 1] = '\0';

	//ファイルを開く
	error = fopen_s(&fp,"myfile.txt", "a");

	if (error != 0)
	{//失敗したら中止
		printf_s("ファイルのオープンに失敗しました。\n");
		exit(-1);
	}

	printf_s("ファイルに追加するテキストを入力してください。\n");
	printf_s("Eと入力すると終了です。\n");

	//UTF-8文字化け対策
	setlocale(LC_CTYPE, ".65001");

	while (1)
	{
		
		scanf_s("%s", str, 1024);		//ファイルに追加する文章の入力
		if (str[0] == 'E')
		{//1文字目がEならループ脱出
			break;
		}

		fprintf_s(fp, "%s", str);		//ファイルに書き込み
		fprintf_s(fp, "%c", '\n');		//見やすくするために改行を書き込む
		printf_s("ファイルにテキストを追加しました。\n");

	}

	//ファイルを閉じる
	fclose(fp);

	system("type myfile.txt");

	return 0;
}