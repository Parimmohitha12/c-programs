#include<stdio.h>
#include<math.h>
void main()
{
	int a, b, c, large;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	large = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Largest number is: %d", large);
}
