#include<conio.h>
#include<stdio.h>

void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<5;i++)
	{
		for(k=5;k>i;k--)
			printf(" ");
		for(j=0;j<i;j++)
			printf("%d ",i);
		printf("\n");
	}
	getch();
}