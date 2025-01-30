#include <stdio.h>
int main()
{
	int num1;
	int num2;
	int result;
	printf("Enter the first number to multiply: \n");
	scanf("%d",&num1);
	printf("Enter the second number to multiply: \n");
	scanf("%d",&num2);
	result = num1 * num2;
	printf("The result of the multiplication is: %d", result);
	return 0;
}