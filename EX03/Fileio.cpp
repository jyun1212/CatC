#include<stdio.h>
#include<string.h>
#include<locale.h>

int file_read(FILE*);

int main(int argc, char* argv[])
{
	FILE* fp;
	errno_t error;

	char fname[64];
	fname[sizeof(fname) - 1] = '\0';
	

	if (argc == 1)
	{
		printf_s("コマンドラインからファイル名を入力できます！\n");
		printf_s("ファイル名=");
		scanf_s("%s", fname,64);
	}
	else
	{
		strcpy_s(fname, argv[1]);
	}

	while (1)
	{
		error = fopen_s(&fp,fname,"r");

		if (error != NULL)
		{
			printf_s("ファイル名が不当です\n");
			printf_s("ファイル名=");
			scanf_s("%s", fname, 64);
		}
		else
		{
			break;
		}
	}

	file_read(fp);

	if (fp != 0) {
	fclose(fp);
	}

	return 0;
}

int file_read(FILE* f)
{
	int ch;

	setlocale(LC_CTYPE, ".65001");
	while ((ch = getc(f)) != EOF)
	{
		putc(ch, stdout);
	}
	return 0;
}