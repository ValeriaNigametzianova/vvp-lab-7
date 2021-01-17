#include <stdio.h>
#include<locale.h>

const float Pi = 3.14;

float Rad(x)
{
	float y = x * Pi / 180;
	return y;
}

int main()
{
	int x;
	printf("Enter an angle in degrees: ");
	scanf_s("%d", &x);
	if (x > 0 && x < 360)
	{
		float angle_in_rad = Rad(x);
		printf("%d ang = %f rad", x, angle_in_rad);
		return 0;
	}
	else
	{
		printf("0 < x < 360");
		return 0;
	}
}