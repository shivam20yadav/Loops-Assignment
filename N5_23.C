#include<conio.h>
#include<stdio.h>
void main()
{
	int num1,num2,ans=0,i=1;
	clrscr();
	printf("enter the two number:- ");
	scanf("%d %d",&num1,&num2);
	for(;i<=num1 && i<=num2;i++)
	{
		if(num1 % i == 0 && num2 % i == 0)
			ans = i;
	}
	printf("%d",ans);
	getch();
}