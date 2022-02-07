#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();
	for(i=65;i<=122;i++)
	{
		if(i >= 91 && i <= 96)
			continue;
		if(i == 97)
			printf("\n");
		printf("%c ",i);
	}
	getch();
}