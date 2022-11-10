#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Header.h"

using namespace std;

int GenRand(int min, int max)
{
	return min + rand() % (max - min);
}

int Gen()
{
	return GenRand(2, 11);
}

int Question(int num1, int num2)
{
	int Result;
	cout << "Чему будет равно произведение?" << endl << num1 << "*" << num2 << endl;
	cout << "Ваш ответ: ";
	cin >> Result;
	return Result;
}

int Proverka(int RightAnswer, int Result)
{
	return (RightAnswer == Result);
}

int Ball(int Result)
{
	if (Result == 1)
		return 1;
	else
		return 0;
}

int Mark(float Counter, int QuestionCounter)
{
	if (Counter / QuestionCounter * 100 < 40)
		return 2;
	if (Counter / QuestionCounter * 100 >= 80)
		return 5;
	else
	{
		if (Counter / QuestionCounter * 100 >= 60)
			return 4;
		else
		{
			if (Counter / QuestionCounter * 100 >= 40)
				return 3;
		}

	}
}
