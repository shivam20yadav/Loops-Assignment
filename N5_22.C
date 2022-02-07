#include<conio.h>
#include<stdio.h>
void main()
{
	int num1,num2,ans,ans2;
	clrscr();
	printf("enter the numbers:- ");
	scanf("%d %d",&num1,&num2);
	if(num1 > num2)
		ans = num1;
	else
		ans = num2;
	for(;;ans++)
	{
		if(ans % num1 == 0 && ans % num2 == 0)
		{
			printf("lcm %d",ans);
			break;
		}
	}
	getch();
}