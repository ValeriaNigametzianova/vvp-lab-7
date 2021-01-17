#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL , "rus");
	float mass_of_sweets; int  cost;
	int price; int number_of_sweets;
	float weight;

	printf("введите начальные данные: массу конфет в кг и их стоимость: ");
	scanf_s("%f%d", &mass_of_sweets, &cost);
	printf("введите вес конфет в кг, стоимость которого нужно посчитать: ");
	scanf_s("%f", &weight);

	price = cost / mass_of_sweets;
	number_of_sweets = price * weight;
	
	printf("цена 1кг конфет =%d руб\nстоимость конфет=%d руб", price, number_of_sweets);
	return 0;
}