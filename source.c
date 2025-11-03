#include <locale.h>
#include <stdio.h>

int area_square(int);
int Opred();
int Draw(int, int, int, char);
int compareSquare(int, int);
int main()
{
	int repeatF, choise,sidea,sideb, sidec;
	char symbol;

	setlocale(LC_ALL, "RUS");

	do
	{
		repeatF = 0;
		puts("Выберите тип операции:");
		puts("1) Посчитать площадь");
		puts("2) Вывести определение");
		puts("3) Нарисовать фигуру");
		puts("4) Сравнить площади двух фигур");
		scanf("%d", &choise);

		switch (choise)
		{
			case 1:
				printf("Введите сторону квадрата: ");
				scanf("%d", &sidea);
				printf("Площадь = %d", area_square(sidea));
				break;
			case 2:
				Opred();
				break;
			case 3:
				printf("Введите стороны квадратов и символ через пробел: ");
				scanf("%d %d %d %c", &sidea, &sideb, &sidec, &symbol);
				Draw(sidea,sideb,sidec, symbol);
				break;
			case 4:
				printf("Введите стороны квадратов: ");
				scanf("%d %d", &sidea,&sideb);
				printf("%d",compareSquare(sidea, sideb));
				break;
		}

		printf("\nЖелаете повторить 0 - нет, иначе - да: ");
		scanf("%d", &repeatF);

	} while (repeatF);
	puts("");
	system("pause");
}
int area_square(int side)
{
	int S = side * side;
	return S;
}
int Opred()
{
	puts("Квадрат — правильный четырёхугольник, то есть плоский четырёхугольник, у которого все углы и все стороны равны.\n Каждый угол квадрата — прямой");
}
int Draw(int sidea, int sideb, int sidec, char symbol)
{
	int bigSide = sidea + sideb - sidec;
	for (int i = 0; i < bigSide; i++) {

		for (int j = 0; j < bigSide; j++) {
			if (i < bigSide - sideb && j < sidea)
			{
				printf("%c",symbol);
			}
			else if (i >= sidea && j < bigSide - sideb) 
			{
				printf(" ");
			}
			else if (i >= sidea && j >= bigSide - sideb)
			{
				printf("%c", symbol);
			}
			else if (i >= bigSide - sideb && i < bigSide-(sideb-sidec))
			{
				if (j >= bigSide - sidea && j < bigSide - (sidea - sidec))
				{
					printf(" ");
				}
				else
				{
					printf("%c", symbol);
				}
			}
		}
		printf("\n");
	}
}
int compareSquare(int sidea, int sideb)
{
	int S1 = sidea * sidea;
	int S2 = sideb * sideb;
	return S1 > S2 ? S1 - S2 : S2 - S1;
}
