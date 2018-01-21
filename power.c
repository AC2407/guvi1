#include<stdio.h>
void main()
{
	int n,p,i,ans=1;
	printf("Enter the number:\t");
	scanf("%d",&n);
	printf("Enter the power:\t");
	scanf("%d",&p);
	for(i-0;i<p;i++)
	{
		ans=ans*n;
	}
	printf("Answer is : %d",ans);
}
