// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>

int main()
{
	printf("Enter length of array\n");
	int ArrayLength;
	int result = scanf_s("%d", &ArrayLength);
	if (result == 0) {
		printf("Error message\n");
		_getch();
		return 0;
	}
	printf("Enter Array\n");
	int Array[1000];
	int maximum = 0;
	int minimum = 1000000;
	int sum = 0;
	int KolichMin = 0;
	int KolichMax = 0;
	for (int i = 0; i < ArrayLength; i++)
	{
		int result = scanf_s("%d", &Array[i]);
		if (result == 0) {
			printf("Error message\n");
			_getch();
			return 0;
		}
		sum += Array[i];
		if (Array[i] < minimum)
		{
			minimum = Array[i];
			KolichMin = 1;
		}
		else if (Array[i] == minimum)
			KolichMin++;
		if (Array[i] > maximum)
		{
			maximum = Array[i];
			KolichMax = 1;
		}
		else if (Array[i] == maximum)
			KolichMax++;
	}
	sum -= maximum*KolichMax + minimum*KolichMin;
	if (sum < 0)
		printf("0");
	else
	{
		float SredArifmet = sum*1.0 / (ArrayLength - KolichMax - KolichMin);
		printf("%1.4f\n", SredArifmet);
	}
	_getch();
    return 0;
}

