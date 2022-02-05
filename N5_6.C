#include<conio.h>
#include<stdio.h>
void main()
{
	int num,temp,temp2,num2 = 0;
	clrscr();
	printf("enter the number:- ");
	scanf("%d",&num);
	temp2 = num;
	while(temp2!= 0)
	{
		temp = temp2 % 10;
		num2 = (num2 * 10) + temp;
		temp2 /= 10;
	}
	if(num == num2)
		printf("number is palindrom");
	else
		printf("number is not palindrom");
	getch();
}