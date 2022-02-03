#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>

void question_create(void);			//問題作成
void input_answer(void);			//答えを入力
void jadge(void);					//答えの入力の正誤判定

int a, b, c;	//グローバル変数
int i;			//イテレータ
int clear_num;	//正答数

void main()
{
	
	while (1)
	{//無限ループ
		LOOPy:
		printf_s("\n九九5問\n\n");
		clear_num = 0;

		for (i = 0; i < 5; i++)
		{//5問で一区切り
			question_create();
			input_answer();
			jadge();
			if (i >= 4)
			{
				printf_s("正答は%d問です。\n\n", clear_num);
				//継続確認
				printf_s("もう一度？\nやる(y) やめる(n)");

			LOOPdef:
				switch (_getch())
				{
				case 'y':
					puts("");
					goto LOOPy;
					break;

				case 'n':
					exit(0);
					break;

				default:
					goto LOOPdef;
					break;
				}
			}
		}

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
	return;
}

void jadge(void)
{
	if (c == a * b)
	{
		printf_s("正解です。\n");
		clear_num++;
	}
	else
	{
		printf_s("不正解です。\n");
	}
	printf_s("\n");
	return;
}