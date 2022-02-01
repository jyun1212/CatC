#include<stdio.h>
#include<conio.h>
#include<string.h>


int input_isbn(void);
int check_isbn(char*);

int main(void)
{
	input_isbn();

	printf_s("何かキーを押してください\n");
	_getch();
	printf_s("End");
	return 0;
}


int input_isbn(void)
{
	char isbn[64];
	int deci;			//decision(判定)

	printf_s("ISBNを入力してください。\n");
	scanf_s("%s", isbn, 64);
	deci = check_isbn(isbn);

	switch (deci)
	{
	case -2:
		printf_s("入力ミスです\n");
		break;
	case -1:
		printf_s("不正番号です\n");
		break;
	case 0:
		printf_s("正しい番号です。\n");
		break;
	}
	return 0;
}

int check_isbn(char* digit)		//数字
{
	int sumNumber;		//合計
	int number[10];		//数値
	int i;				//イテレータ(isbn文字数)

	if (strlen(digit) != 10)
	{//文字列の長さをチェック
	//10文字でなければ－2を返す
		return -2;
	}

	sumNumber = 0;

	for (i = 0; i <= 8; i++)
	{
		number[i] = digit[i] - 48;
	}

	for (i = 0; i <= 8; i++)
	{
		sumNumber = sumNumber + number[i] * (10 - i);
	}
	if (digit[9] == 'X' || digit[9] == 'x')
	{//末尾がXの場合
		sumNumber += 10;
	}
	else
	{
		sumNumber = sumNumber + digit[9] - 48;
	}

	printf_s("合計は%d\n", sumNumber);
	
	if (sumNumber % 11 == 0)
	{//合計が11の倍数なら0
		return 0;
	}
	else
	{//違うなら-1を返す
		return -1;
	}


}