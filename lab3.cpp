#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#define D 2.54
int z1();
int z2();
int z3();
int main()
{
    setlocale(LC_ALL, "RUS");
	puts("МОЯ ПРОГРАММА");
	z1();
	z2();
	z3();
	 

	 return 0;

}

 
int z1()
{
	int num1;
	int num2;
	puts("введите число");
	scanf("%d", &num1);
	printf("введено число % d\n", num1);
	printf("введите второе число: ");
	scanf("%d" , &num2);

	printf("\nРезультаты:\n");
	printf("сумма = %d\n", num1 + num2);
	printf("разность = %d\n", num1 - num2);
	printf("произведение = %d\n", num1 * num2);
	printf("частное = %d\n", num1 / num2);
	printf("остаток = %d\n", num1 % num2);
    return 0;
	
}


 int z2()
 {
	 int dym;
	 float result;
	 printf("введите значение дюймов: ");
	 scanf("%d", &dym);
	 result = D * dym;
	 printf("%d дюймов - это %.2f см\n", dym, result);
	 return 0;

}
 int z3()
 {
	 int a, b;
	 puts("введите число a\n");
     scanf("%d", &a);
	 puts("введите число b\n");
	 scanf("%d", &b);
	 printf("----------------------------------\n");
	 printf("|%7s   |%7s   |%7s   |\n", "a*b", "a+b", "a-b");
	 printf("----------------------------------\n");
	 printf("|%5d*%-4d|%5d+%-4d|%5d-%-4d|\n", a, b, a, b, a, b);
	 printf("----------------------------------\n");
	 printf("|%7d   |%7d   |%7d   |\n", a * b, a + b, a - b);

		 return 0;
 }
