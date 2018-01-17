#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first number:\t");
	scanf("%d",&a);
	printf("Enter second number:\t");
	scanf("%d",&b);
	printf("Enter third number:\t");
	scanf("%d",&c);
	
	if(b>a && b>c)
		printf("Largest number is %d",b);
	else if(c>a && c>b)
		printf("Largest number is %d",c);
	else 
		printf("Largest number is %d",a);
	return 0;
	
}