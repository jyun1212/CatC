#include<stdio.h>
#include<stdlib.h>
#include<process.h>

void question_create(void);			//問題作成
void input_answer(void);			//答えを入力
void jadge(void);					//答えの入力の正誤判定

int a, b, c;	//グローバル変数

void main()
{
	printf_s("やめるときは、99と入力してください\n");
	while (1)
	{//無限ループ
		question_create();
		input_answer();
		jadge();
	}
	return;

}


void question_create(void)
{
	a = rand() % 10;
	b = rand() % 10;
	printf_s("%d かける %d は ", a, b);
	return;
}

void input_answer(void)
{
	scanf_s("%d", &c);
	if (c == 99)
	{
		exit(0);
	}

	return;
}

void jadge(void)
{
	if (c == a * b)
	{
		printf_s("正解です。\n");
	}
	else
	{
		printf_s("不正解です。\n");
	}
	printf_s("\n");
	return;
}