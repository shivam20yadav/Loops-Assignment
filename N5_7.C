#include<stdio.h>
#include<conio.h>

void main()
{
	int *a,range,sum=0,i,avg = 0;
	clrscr();
	printf("enter the range:- ");
	scanf("%d",&range);
	a = (int *)malloc(range*sizeof(int));
	for(i=0;i<range;i++)
	{
		printf("enter the value:- ");
		scanf("%d",&a[i]);
		sum +=a[i];
	}
	avg = sum / range;
	printf("sum of list %d and avg of list %d",sum,avg);
	getch();
}