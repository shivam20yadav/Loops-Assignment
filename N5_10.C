#include<conio.h>
#include<stdio.h>
void main()
{
	int i,sum=0,s,e;
	clrscr();
	printf("enter the strting point:- ");
	scanf("%d",&s);
	printf("enter the ending point:- ");
	scanf("%d",&e);
	for(i=s;i<e;i++,sum+=i);
	printf("sum of %d to %d is:- %d",s,e,sum);
	getch();
}