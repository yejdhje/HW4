#include<stdio.h>

int addbyOne(int &a);

void main() 
{
	int x = 100;
	addbyOne(x);
	printf("x=%d\n", x);

}

int addbyOne(int &a)
{
	a++;
	printf("xref=%d\n", a);
	return a;
}
