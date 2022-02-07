#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i;
	clrscr();
	printf("enter the nunmber:- ");
	scanf("%d",&num);
	for(i=1;num/10>0;i++)
		num/=10;
	printf("%d",i);
	getch();
}