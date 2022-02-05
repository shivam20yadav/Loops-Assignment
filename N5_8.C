#include<conio.h>
#include<stdio.h>

void main()
{
	int i,num,sum=0;
	clrscr();
	printf("enter the number:- ");
	scanf("%d",&num);
	printf("the positive divisor:- ");
	for(i=1;i<=num/2;i++)
	{
		if(num % i == 0)
		{
			printf("%d ",i);
			sum += i;
		}
	}
	printf("\nsum of the divisor is:- %d",sum);
	if(sum == num)
		printf("\nperfect number");
	else
		printf("\nnot perfect number");
	getch();
}