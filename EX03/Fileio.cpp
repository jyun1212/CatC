#include<stdio.h>

float calcPrice(float, float);

int main()
{
	float price;		//���z(kingaku)
	float tax;			//�����(zeiritsu)
	float sumprice;		//�艿(nedam)

	printf_s("���z��0����͂���ƏI�����܂��B");

	while (1)
	{
		printf_s("���z����͂��Ă������� = ");
		scanf_s("%f", &price);
		if (price == 0.0)
		{//���z��0�Ȃ烋�[�v�I��
			break;
		}

		printf("����ł���͂��Ă�������(%%) = ");
		scanf_s("%f", &tax);

		sumprice = calcPrice(price, tax);

		//6�������_�ȉ��Ȃ�
		//�}�C�i�X�͍��l�ߕ\��
		//						��������f�������Y��Ă���
		printf_s("%-6.0f�~��%-2.0f%%�̏���ł��������%-6.0f�~�ɂȂ�B\n", price, tax, sumprice);
	}

	return 0;
}


float calcPrice(float a, float b)
{
	float c;
	c = a * (1 + b / 100);
	return c;
}