#include<stdio.h>

float calcPrice(float, float);

int main()
{
	float price;		//金額(kingaku)
	float tax;			//消費税(zeiritsu)
	float sumprice;		//定価(nedam)

	printf_s("金額に0を入力すると終了します。");

	while (1)
	{
		printf_s("金額を入力してください = ");
		scanf_s("%f", &price);
		if (price == 0.0)
		{//金額が0ならループ終了
			break;
		}

		printf("消費税を入力してください(%%) = ");
		scanf_s("%f", &tax);

		sumprice = calcPrice(price, tax);

		//6桁小数点以下なし
		//マイナスは左詰め表示
		//						↓ここのfを書き忘れていた
		printf_s("%-6.0f円に%-2.0f%%の消費税を加えると%-6.0f円になる。\n", price, tax, sumprice);
	}

	return 0;
}


float calcPrice(float a, float b)
{
	float c;
	c = a * (1 + b / 100);
	return c;
}