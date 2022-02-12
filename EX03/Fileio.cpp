//cmd実行テスト用
//VisualStudioからデバッグ実行しても得たい結果は得られない
//コマンド「>ファイル名 abc def /?」

#include<stdio.h>

int main(int argc, char* argv[])
{
	int i;
	printf_s("\n");
	printf_s("argc は%dです。\n", argc);
	printf_s("次に、argv[x]の中身を示します。\n");
	for (i = 0; i < argc; i++)
	{
		printf_s("argv[%d]=%s\n", i, argv[i]);
	}
	printf_s("このように、argv[0]には、このプログラム自身の名前が入ります。\n");
	return 0;
}