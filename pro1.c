#include<stdio.h>
void main()
{
	int N;
	printf("enter the number :\t");
	scanf("%d",&N);
	if(N>0)
		printf("POSITIVE NUMBER");
	else if(N<0)
		printf("NEGATIVE NUMBER");
	else	
		printf("ZERO");
}