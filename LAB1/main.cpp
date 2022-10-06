#include <stdio.h> 

int main() 
{ 
	int a; 
	int res; 
	printf("Enter number: "); 
	scanf_s("%i", &a); 
	res = a * a; 
	printf("Square of %i is %i\n", a, res); 
	return 0; 
} 