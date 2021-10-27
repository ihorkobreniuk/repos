#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
/*{
	int a = 3, b = 7, temp;
	temp = a + b;
	b = temp - b;
	a = temp - a; //с доп
*/}
{
	int a = 3, b = 7;
	a = a + b;
	b = a - b;
	a = a - b; //без доп
}