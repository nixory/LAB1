#include <stdio.h> 

int main() 
{ 
	int a, b; 
	int res, sum, diff, mult;
	float div;
	printf("Enter number 1: "); 
	scanf_s("%i", &a);
	printf("Enter number 2: ");
	scanf_s("%i", &b);
	res = a * a;
	sum = a + b;
	diff = a - b;
	mult = a * b;
	div = float(a) / b;
	printf("Square of %i is %i\n", a, res); 
	printf("%i + %i = %i\n", a, b, sum);
	printf("%i - %i = %i\n", a, b, diff);
	printf("%i * %i = %i\n", a, b, mult);
	printf("%i / %i = %.2f\n", a, b, div);
	return 0; 
} 