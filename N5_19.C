#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,range;
	clrscr();
	printf("enter the range:- ");
	scanf("%d",&range);
	for(i=0;i<=range;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=range-1;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}