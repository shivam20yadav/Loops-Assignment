#include<conio.h>
#include<stdio.h>

void main()
{
	int i,j,range,temp=1;
	clrscr();
	printf("enter the range:- ");
	scanf("%d",&range);
	for(i=1;i<range;i++)
	{
		for(j=0;j<i;j++,temp++)
		{
			printf("%d ",temp);
		}
		printf("\n");
	}
	getch();
}