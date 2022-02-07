#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=0;i<=5;i++)
	{
		for(k=5;k>=i;k--)
			printf("  ");
		for(j=1;j<=i;j++)
			printf("%c ",j+64);
		for(j=i-1;j>=1;j--)
			printf("%c ",j+64);
		printf("\n");
	}
	getch();
}