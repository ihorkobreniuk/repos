#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/* параметры, которые вводятся */
	double x, y;
	/* параметры, которые задаются в программе */
	double a = 1, b = 8;
	double t1, t2;   /* результаты */
	double ax;       /* рабочая переменная */

	printf("Введите x, y >");
	scanf("%lf %lf", &x, &y);

	ax = a * x;
	t1 = (1 / (b * b)) * (log(y / x) + (ax / y));

	ax = a * x;
	t2 = -(x / a) * tan(ax / 2) + (2 / (a * a)) * log(sin(ax / 2));

	printf("t1 = %lf\n", t1);
	printf("t2 = %lf\n", t2);

	
	return 0;
}