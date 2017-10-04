// laboratornaya1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#define YardsInKm 1093.6133;
#define InInY 36;

int main()
{
	printf("Enter lnegth in kilometres\n");
	float kms;
	scanf_s("%f", &kms);
	float yards = kms * YardsInKm;
	printf("Length in yards is %1.2f\n", yards);
	float inches = yards * InInY;
	printf("Length in inches is %1.2f\n", inches);
    return 0;
}

