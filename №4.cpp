#include<stdio.h>

int D(v, t)
{
	int y = v * t;
	return y;
}
float S(float x1,float x2,float x3)
{
	float y = x1 + x2 +x3;
	return y;
}

int main()
{
	int speed_1, speed_2;
	int time;
	float distance;
	printf("Enter integer number\nspeed of the first car(km/h), speed of the second car(km/h), time(h), the distance between the cars(km) : ");
	scanf_s("%d%d%d%f", &speed_1, &speed_2, &time, &distance);
	
	int drive_1 = D(speed_1,time);
	int drive_2 = D(speed_2, time);

	printf("%d km, %d km\n", drive_1, drive_2);
	float spacing = S((float)drive_1,(float) drive_2, distance);
	printf("Spacing = %f km ", spacing);
	return 0;
}