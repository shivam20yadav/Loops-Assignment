#include<stdio.h>
#include<conio.h>

void main()
{
	int i,s,e,temp,temp2,sum=0;
	clrscr();
	printf("enter the starting point & ending point:- ");
	scanf("%d %d",&s,&e);
	for(i=s;i<e;i++)
	{
		temp2 = i;
		while(temp2 != 0)
		{
			temp = temp2 % 10;
			sum = sum + (temp * temp * temp);
			temp2 /= 10;
		}
		if(sum == i)
		{
			printf("%d ",i);
		}
		sum = 0;
	}
	getch();
}