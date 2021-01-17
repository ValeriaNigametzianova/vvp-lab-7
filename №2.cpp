#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	double g = M_PI;
	double a;
	printf("значение угла а в радианах (0 < a < 2pi): ");
	scanf_s("%lf", &a);

	if ((a > 0) & (a < 2*g))
	{
		a = a * 180 / g;
	}
	else
	{
		printf("ошибка значения");
	}

	printf("%lf", a);
	return 0;
 }