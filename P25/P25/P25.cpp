#include<stdio.h>
#include<stdlib.h>
int addbyOne(int &a);

void main() 
{
	int x = 100;
	addbyOne(x);
	printf("x=%d\n", x);
	system("pause");
}

int addbyOne(int &a)
{
	a++;
	printf("xref=%d\n", a);
	return a;
}
