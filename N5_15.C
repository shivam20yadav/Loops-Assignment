#include<conio.h>
#include<stdio.h>

void main()
{
	int range,i,j;
	clrscr();
	printf("enter the range:- ");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		if(i % 2 == 0)
		{
			for(j=1;j<=i;j++)
			{
				if(j % 2 == 0)
					printf("1 ");
				else
					printf("0 ");
			}
		}
		if(i % 2 != 0)
		{
			for(j=1;j<=i;j++)
			{
				if(j % 2 == 0)
					printf("0 ");
				else
					printf("1 ");
			}

		}
		printf("\n");
	}
	getch();
}