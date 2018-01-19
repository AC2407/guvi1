#include<stdio.h>
int main()
{
	int a[100],N,K;
	printf("Enter the size of array:\t");
	scanf("%d",&N);
	printf("Number of elements you want sum:\t");
	scanf("%d",&K);
	printf("Enter the array:\t");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<K;i++)
		sum=sum+a[i];
	printf("sum = ",sum);
}