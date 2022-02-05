#include<conio.h>
#include<stdio.h>

void main()
{
	int i,num,ans=1;
	clrscr();
	printf("enter the number:- ");
	scanf("%d",&num);
	for(i=1;i<num;i++,ans*=i);
	printf("%d",ans);
	getch();
}