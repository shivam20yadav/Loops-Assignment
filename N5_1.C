#include<conio.h>
#include<stdio.h>

void main()
{
	int i,sum=0,range;
	clrscr();
	printf("enter the range:- ");
	scanf("%d",&range);
	for(i=0;i<range;i++,sum+=i);
	printf("sum of 1 to %d is:- %d",range,sum);
	getch();
}