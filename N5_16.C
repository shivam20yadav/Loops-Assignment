#include<conio.h>
#include<stdio.h>

int leep(int num)
{
	if(num % 4 == 0)
		return 1;
	if(num % 400 == 0)
		return 1;
	else
		return 0;
}
void main()
{
	int range,ans,i;
	clrscr();
	printf("enter the range:- ");
	scanf("%d",&range);
	for(i=1;i<range;i++)
	{
		ans = leep(i);
		if(ans == 1)
			printf("%d leap year\n",i);
		else
			printf("%d not leep year\n",i);
	}

	getch();
}