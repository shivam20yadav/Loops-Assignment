#include<conio.h>
#include<stdio.h>

void main()
{
	int num;
	char ch;
	clrscr();
	for(;;)
	{
		printf("\nenter the number:-");
		scanf("%d",&num);
		if(num > 0)
			printf("\n%d is positive number",num);
		else if(num < 0)
			printf("\n%d is negitive number",num);
		else if(num == 0)
			printf("\n%d is zero",num);
		fflush(stdin);
		printf("\ndo you want to continue..!(enter y)");
		if(ch = getch() =='y')
			continue;
		else
			break;
	}
	getch();
}
