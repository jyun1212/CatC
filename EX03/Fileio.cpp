#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void saikoro(int*, int*);

int main()
{
	long bet;		//掛け金
	long money;		//所持金
	int cho_han;
	int dice1, dice2;
	int result;
	int cont;		//continue
	char result_str[8];

	printf_s("あなたの所持金は？ -->");
	scanf_s("%ld", &money);
	puts("");

	while (1)
	{
		printf_s("掛け金を入力してください。-->");
		scanf_s("%ld", &bet);

		printf_s("\n丁=0,半=1 -->");
		scanf_s("%d", &cho_han);
		puts("");

		saikoro(&dice1, &dice2);
		result = (dice1 + dice2) % 2;

		if (result == 0)
		{//出目の合計が偶数なら
			strcpy_s(result_str, "丁");
		}
		else
		{//出目の合計が奇数なら
			strcpy_s(result_str, "半");
		}

		printf_s("\nサイコロ1=%d サイコロ2=%d 結果は%sでした\n", dice1, dice2, result_str);

		if (cho_han == result)
		{
			money += bet;
		}
		else
		{
			money -= bet;
			if (money <= 0L)
			{
				printf_s("もうお金がありません\n");
				printf_s("あなたは死にました\n");
				break;
			}
		}

		printf_s("\nあなたの持ち金は%ld円です\n", money);

		printf_s("続けますか？[yes=1,no=0]");
		scanf_s("%d", &cont);
		if (cont == 0)
		{
			break;
		}

	}

	printf_s("\n終了です\n");
	return 0;
}

void saikoro(int* a, int* b)
{
	srand((unsigned)time(NULL));
	*a = rand() % 6 + 1;
	*b = rand() % 6 + 1;
	return;
}