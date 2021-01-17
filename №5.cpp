#include <stdio.h>
const int A = 6;
const int B = -2;

int main()
{
	int x;
	printf("enter x: ");
	scanf_s("%d", &x);
	int the_value_of_the_expression = funkc(x);
	printf("The value of the expression: %d", the_value_of_the_expression);
	return 0;
}

int funkc(int x)
{
	int y = A * x + B;
	return y;
}