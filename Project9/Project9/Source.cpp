#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
// остальное доделаю после экзамена
void task3()
{
	int a = 10000;
	int b = 10000;
	int s = 11000;
	int q;
	int sum = 0;
	
	do {
		q = s - b;
		a = a - q;
		s = s*1.03;
		sum++;

		printf("%d\n", sum);
	} while (a >= 0);
	printf("%d", sum);
}
void task2()
{
	int a = 1;
	int sum = 0;
	int n = 5;
	int i = 1;
	int m = 1 + rand() % 5;
	for (int i = 1; i <= n; i++)
	{
		a = 1;
		for (int o = 1; o <= m; o++)
		{
			int f;

			f = a;
			a = i * f;
			
			printf("%d\n", a);
		}
		printf("___________________________\n");
		sum = sum + a;
		printf("%d\n", sum);
		printf(" _______\n");

	}


	printf(" окочательная сумма %d\n", sum);
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task2(); break;
		case 2: task3(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}
