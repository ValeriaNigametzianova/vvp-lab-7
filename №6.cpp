#include<stdio.h>
#include<locale.h>
int A1, B1, C1, A2, B2, C2;

float reshenie_sistemi_x(A1, B1, C1, A2, B2, C2)
{
	                                        //A1·x + B1·y = C1, 
	int det = A1 * B2 - A2 * B1;//-3   //A2·x + B2·y = C2,
	int det1 = C1 * B2 - C2 * B1;//3
	float z = det1 / det;
	return z;
}
float reshenie_sistemi_y(A1, B1, C1, A2, B2, C2)
{
	//A1·x + B1·y = C1, 
	int det = A1 * B2 - A2 * B1;//-3   //A2·x + B2·y = C2,
	int det2 = A1 * C2 - A2 * C1;//-6
	float k = det2 / det;
	return k;
}

int main()
{
	setlocale(LC_ALL, "rus");
	printf("enter A1,B1,C1,A2,B2,C2: ");
	scanf_s("%d %d %d %d %d %d", &A1, &B1, &C1, &A2, &B2, &C2);
	int det = A1 * B2 - A2 * B1;
	if (det != 0)
	{
		float resh_sist_x = reshenie_sistemi_x(A1, B1, C1, A2, B2, C2); //1 2 3 4 5 6 
		float resh_sist_y = reshenie_sistemi_y(A1, B1, C1, A2, B2, C2);
		printf("x = %f\ny = %f", resh_sist_x, resh_sist_y);
		return 0;
	}
	else if (A1 / A2 == B1 / B2 == C1 / C2)
	{
		printf("система  имеет бесконечное множество решений");
		return 0;
	}
	else
	{
		printf("система не имеет решений");
		return 0;
	}
}