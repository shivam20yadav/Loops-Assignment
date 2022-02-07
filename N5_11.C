#include<conio.h>
#include<stdio.h>
void main()
{
	int num,i,temp=0,sum=1;
	int arr[5];
	clrscr();
	printf("enter the number:- ");
	scanf("%d",&num);
	temp = num;
	for(i=0;temp/10>0;i++,sum++)
		temp /= 10;
	temp = num;
	for(i = sum;i>0;i--)
	{
		arr[i] = temp % 10;
		temp /= 10;
	}
	temp = arr[1];
	arr[1] = arr[sum];
	arr[sum] = temp;
	for(i=1;i<=sum;i++)
	{
		printf("%d",arr[i]);
	}
	getch();
}