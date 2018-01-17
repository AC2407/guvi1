#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character: \t");
	scanf("%c",&c);
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U')
		printf("The character entered is VOWEL");
	else
		printf("The character entered is CONSONENT");
}