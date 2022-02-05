#include<stdio.h>
#include<conio.h>

void main()
{
	int range,i;
	clrscr();
	printf("enter the range:- ");
	scanf("%d",&range);
	for(i=1;i<=range;i+=2)
		printf("%d- ",i);
	getch();
}