// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	float x, s = 0.f;
	scanf_s("%f", &x);
	float a = x;
	for (int i = 0; i <= 8; i++) {
		s += a;
		a *= float(log(5)*x / (i + 1));
	}
	double y = x * pow(5, x), tol = fabs(y - s) / y;
	printf("Sum:\t\t%.7f\nControl:\t%.7f\nTolerance:\t%.7f\n", s, y, tol);
	return 0;
}

