#include<stdio.h>
#include<conio.h>

void main()
{
	int *a,range,sum=0,i;
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
	printf("sum of list %d",sum);
	getch();
}