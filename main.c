#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int(*p[4])(int x, int y);

int main()
{
	int a, c, result;
	int b;
	p[0] = plus;
	p[1] = minus;
	p[2] = multiply;
	p[3] = divided;
		
	printf("Please Enter Two Numbers: \n");
	scanf("%i %i", &a, &c);
	
	printf("0: Plus, 1: Minus, 2: Multiply, 3: Divided\n");
	
	do{	
		printf("Please Enter the operation you want: ");
		scanf("%d", &b);
		
	}

	while(b<0 || b>3);
	
	result = (*p[b])(a, c);

	printf("Result is = %d", result);

}

