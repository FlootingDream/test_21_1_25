#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void Swap1(int* x, int* y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
void Swap2(int* x, int* y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
void Swap3(int* x, int* y)
{
	(*x) = (*x) ^ (*y);
	(*y) = (*x) ^ (*y);
	(*x) = (*x) ^ (*y);
}
int main(int argc, char *argv[]) 
{
	int a, b;
	scanf("%d%d", &a, &b);
	Swap1(&a, &b);
	printf("a=%d b=%d\n", a, b);
	scanf("%d%d", &a, &b);
	Swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);
	scanf("%d%d", &a, &b);
	Swap3(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
