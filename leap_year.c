#include <stdio.h>
int main()
{
  int year;
  printf("Enter any year:\t");
  scanf("%d", &year);
  if ( year%400 == 0|| year%4 == 0) 
    printf("leap Year");
  else if ( year%100 == 0) 
    printf("NOT a leap Year");
  else 
    printf("NOT a leap Year");  
 
  return 0;
}