#include<stdio.h>
int main()
{
	int N,i,sum=0;
	printf("Enter the Number upto which you want sum of natural numbers:\t");
	scanf("%d",&N);
	if(N>0)
	{
		for(i=1;i<N;i++)
			sum=sum+i;
	}
	else
		printf("The Entered number is not a natural number");
	printf("sum of %d natural sumbers is : %d",N,sum);
}