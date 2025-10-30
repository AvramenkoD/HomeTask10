# Домашнее задание к работе 10

## Условие задачи
Составьте программу, которая для заданной пользователем фигуры(Квадрат), предлагает меню выбора одной из операций:
1) рассчитать площадь;
2) вывести определение фигуры;
3) нарисовать фигуру.
---
## 1. Алгоритм и блок схема

### Алгоритм
1. **Начало**
2. Объявить переменные:
   - `repeatF` - выбор повторения программы
   - `side` - сторона
   - `symbol` - печатаемый симбол
3. Запросить у пользователя side, symbol
4. В цикле `int i` от 1 до side (вкл)
    	a. Перевод каретки на новую строку;
      b. В цикле `int j` от 1 до side (вкл)
             Выводим `symbol`
6. Спросить у пользователя хочет ли он повторить, если да то к 3 пункту, иначе 7
7. **Конец**

### Блок-схема
![Блок-схема алгоритма](Lab9_schema.png)

 [Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Lab9_schema.drawio&dark=auto#Uhttps%3A%2F%2Fdrive.google.com%2Fuc%3Fid%3D1i_8qfE62aDyNv1b-rcq080gaXy8P7hKS%26export%3Ddownload)

 ## 2. Реализация программы

```c
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
```
# 3. Результаты работы программы
Введите стору квадрата и символ через пробел: 5 a

aaaaa
aaaaa
aaaaa
aaaaa
aaaaa
Желаете повторить 0 - нет, иначе - да: 1
Введите стору квадрата и символ через пробел: 6 /

//////
//////
//////
//////
//////
//////
Желаете повторить 0 - нет, иначе - да: 0

Для продолжения нажмите любую клавишу . . .

# 4. Информация о разработчике
Авраменко Дмитрий бИПТ-251
