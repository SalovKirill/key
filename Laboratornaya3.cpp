// Laboratornaya3.cpp: определяет точку входа для консольного приложения.
/*
Салов Кирилл Андреевич
Лабораторная работа №3
Вариант №2
Задание: Написать программу, которая во вводимом с клавиатуры тексте выберет слова,
начинающиеся с гласной буквы, и выведет их на экран.
*/

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>

int WordLength = 0;

bool IsVowel(char c)
{
	if (c == 'A' || c == 'a'
		|| c == 'E' || c == 'e'
		|| c == 'O' || c == 'o'
		|| c == 'U' || c == 'u'
		|| c == 'I' || c == 'i'
		|| c == 'Y' || c == 'y')
		return 1;
	else return 0;

}

void Add(char c, char* word)
{
	if (WordLength)
	{
		if (word[WordLength - 1] == 10 && c == 10)
			return;
	}
	word = (char*)realloc(word, (WordLength + 1) * sizeof(char));
	word[WordLength] = c;
	WordLength++;
}

int main()
{
	char *Word = (char*)calloc(1, sizeof(char));
	char c;
	int state = 0;
	do
	{
		c = getchar();
		printf("%d\n", (int)c);
		if (isspace(c) || c == 26)
		{
			if (state == 1)
			{
				Add('\n', Word);
			}
			state = 0;
		}
		else if (state == 0)
		{
			if (IsVowel(c))
			{
				state = 1;
				Add(c, Word);
			}
			else state = 2;
		}
		else if (state == 1)
		{
			Add(c, Word);
		}
	}
	while (c != 26 && c != EOF);
	printf("%s", Word);
	_getch();
    return 0;
}
 