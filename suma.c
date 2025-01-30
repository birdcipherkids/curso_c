#include <stdio.h>
int main()
{

	int num1;
	int num2;
	int resultado;
	printf("Enter the first value\n");
	scanf("%d",&num1);
	printf("Enter the second value\n");
	scanf("%d",&num2);
	resultado = num1 + num2;
	printf("El resultado de la suma es:%d\n",resultado);
	return 0;
}