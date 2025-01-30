#include <stdio.h>
int main()
{

	int num1;
	int num2;
	int resultado;
	printf("Enter the first number: \n");
	scanf("%d",&num1);
	printf("Enter the second number: \n");
	scanf("%d",&num2);
	resultado = num1 - num2;
	printf("The result of the substration is: %d", resultado);
	return 0;

}