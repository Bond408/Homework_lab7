#include <stdio.h>
#include <locale.h>
int main(void)
{
	int x;
	setlocale(LC_ALL, "RUS");
	printf("Введите число: ");
	scanf_s("%d", &x);
	switch (x)
	{
	case 0:
		printf("0 - zero");
		break;
	case 1:
		printf("1 - one");
		break;
	case 2:
		printf("2 - two");
		break;
	case 3:
		printf("3 - three");
		break;
	case 4:
		printf("4 - four");
		break;
	case 5:
		printf("5 - five");
		break;
	case 6:
		printf("6 - six");
		break;
	case 7:
		printf("7 - seven");
		break;
	case 8:
		printf("8 - eight");
		break;
	case 9:
		printf("9 - nine");
		break;
	default:
		printf("Неизвестный символ.");
	}
	return;
}