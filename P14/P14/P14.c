#include<stdio.h>
#include<stdlib.h>
#define STUDENTS 3
#define EXAM 4

int minimum(const int grades[][EXAM], int pupils, int tests);
int maximum(const int grades[][EXAM], int pupils, int tests);
double average(const int setOfGrades[], int tests);
void printArray(const int grades[][EXAM], int pupils, int tests);

int main(void)
{
	int student;
	const int studentGrades[STUDENTS][EXAM] =
	{ {77,68,86,73},
	  {96,87,89,78},
	  {70,90,86,81} };
	printf("The array is:\n");
	printArray(studentGrades, STUDENTS, EXAM);

	printf("\n\nLowest grade: %d\nHighest grades: %d\n",
		minimum(studentGrades, STUDENTS, EXAM),
		maximum(studentGrades, STUDENTS, EXAM));

	for (student = 0; student < STUDENTS; student++)
	{
		printf("The average grade for student %d is %.2f\n",
			student, average(studentGrades[student], EXAM));
	}
	system("pause");
	return 0;
}

void printArray(const int grades[][EXAM], int pupils, int tests)
{
	int i;
	int j;

	printf("                  [0]  [1]  [2]  [3]");

	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentsGrades[%d] ", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grades[i][j]);
	}
}

int minimum(const int grades[][EXAM], int pupils, int tests)
{
	int i, j, lowGrades = 100;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowGrades)
			{
				lowGrades = grades[i][j];
			}
		}
	}
	return lowGrades;
}
int maximum(const int grades[][EXAM], int pupils, int tests)
{
	int i, j, highGrades = 0;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highGrades)
			{
				highGrades = grades[i][j];
			}
		}
	}
	return highGrades;
}

double average(const int setOfGrades[], int tests)
{
	int i, total = 0;
	for (i = 0; i < tests; i++)
	{
		total += setOfGrades[i];
	}
	return (double)total / tests;
}
