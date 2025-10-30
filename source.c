#include <locale.h>
#include <stdio.h>
int area_square(int side)
{
	int S = side * side;
	return S;
}
int Opred()
{
	puts("Квадрат — правильный четырёхугольник, то есть плоский четырёхугольник, у которого все углы и все стороны равны.\n Каждый угол квадрата — прямой");
}
int Draw(int side, char symbol)
{
	for (int i = 1; i <= side; i++)
	{
		printf("\n");
		for (int j = 1; j <= side; j++)
			printf("%c", symbol);
	}
}
int get_side(int side)
{
	printf("Сторона = %d",side);
}
int compareSquare(int sidea, int sideb)
{
	int S1 = sidea * sidea;
	int S2 = sideb * sideb;
	return S1 > S2 ? S1 - S2 : S2 - S1;
}
int main()
{
	int repeatF, sideA,choise,sideB;
	char symbol;

	setlocale(LC_ALL, "RUS");

	do
	{
		repeatF = 0;
		puts("Выберите тип операции:");
		puts("1) Посчитать площадь");
		puts("2) Вывести определение");
		puts("3) Нарисовать фигуру");
		puts("4) Вывести сторону");
		puts("5) Сравнить площади двух фигур");
		scanf("%d", &choise);

		switch (choise)
		{
			case 1:
				printf("Введите сторону квадрата: ");
				scanf("%d", &sideA);
				printf("Площадь = %d", area_square(sideA));
				break;
			case 2:
				Opred();
				break;
			case 3:
				printf("Введите сторону квадрата и символ через пробел: ");
				scanf("%d %c", &sideA, &symbol);
				Draw(sideA, symbol);
				break;
			case 4:
				printf("Введите сторону квадрата: ");
				scanf("%d", &sideA);
				get_side(sideA);
				break;
			case 5:
				printf("Введите стороны квадратов: ");
				scanf("%d %d", &sideA,&sideB);
				compareSquare(sideA, sideB);
				break;
		}

		printf("\nЖелаете повторить 0 - нет, иначе - да: ");
		scanf("%d", &repeatF);

	} while (repeatF);
	puts("");
	system("pause");
}
