#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Russian");
	char name1[9], name2[9], name3[9], name4[9], name5[9], name6[9];
	unsigned short cnt1, cnt2, cnt3, cnt4, cnt5, cnt6;


	printf("1. Введите: Наименование, Производитель, Кол-во сот.частей, Цена ($) >");
	scanf("%s %s %d %d", name1, name2, &cnt1, &cnt2);
	printf("2. Введите: Наименование, Производитель, Кол-во сот.частей, Цена ($) >");
	scanf("%s %s %d %d", name3, name4, &cnt3, &cnt4);
	printf("3. Введите: Наименование, Производитель, Кол-во сот.частей, Цена ($) >");
	scanf("%s %s %d %d", name5, name6, &cnt5, &cnt6);


	printf("---------------------------------------------------------------------------\n");
	printf("| Офисные пакеты                                                          |\n");
	printf("|-------------------------------------------------------------------------|\n");
	printf("| ННаименование   | Производитель   | Количество сост.частей    |Цена ($) |\n");
	printf("|-----------------|-----------------|---------------------------|---------|\n");
	printf("| %15s | %15s | %25d | %7d |\n", name1, name2, cnt1, cnt2);
	printf("| %15s | %15s | %25d | %7d |\n", name3, name4, cnt3, cnt4);
	printf("| %15s | %15s | %25d | %7d |\n", name5, name6, cnt5, cnt6);
	printf("|-------------------------------------------------------------------------|\n");
	printf("| Примечание:Возможно получить бесплатно продукт StarOffice через Internet|\n");
	printf("---------------------------------------------------------------------------\n");



	system("pause");
	return 0;
}

//system("pause");  //чтобы сразу не пропадало окно
//setlocale(LC_ALL, "Russian"); //для русского языка в кансоле