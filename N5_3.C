#include<stdio.h>
#include<conio.h>

void main()
{
	int *a,range,i;
	clrscr();
	printf("enter the range:- ");
	scanf("%d",&range);
	a = (int *)malloc(range*sizeof(int));
	for(i=0;i<range;i++)
	{
		printf("enter the value:- ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<range;i++)
		if(a[i] % 2 != 0)
			printf("%d-",a[i]);
	getch();
}